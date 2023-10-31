#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct mylock {     // Mulock structure
    pthread_mutex_t mutex;
};

// Initiating lock for each transaction
void set_mylock(struct mylock *lock) {
    pthread_mutex_init(&lock->mutex, NULL);
}

// Dolock function to apply lock
void dolock(struct mylock *lock) {
    pthread_mutex_lock(&lock->mutex);
}

// Unlock function to release lock
void unlock(struct mylock *lock) {
    pthread_mutex_unlock(&lock->mutex);
}

// Structure to store account details
struct account {
    int account_number;
    int account_balance;
    struct mylock lock;
};

// Setting account details for each user
void account_entry(struct account *acc, int acc_num, int acc_bal) {
    acc->account_number = acc_num;
    acc->account_balance = acc_bal;
    set_mylock(&acc->lock);
}

// Function to make transaction
void transfer(struct account *from, struct account *to, int amount) {
    dolock(&from->lock);            // Lock applied
    dolock(&to->lock);              // Lock applied
    from->account_balance -= amount;
    to->account_balance += amount;
    unlock(&from->lock);            // Lock released
    unlock(&to->lock);              // Lock released
}

// 
void* transfer_thread(void *data) {
    int amount;
    struct account **temp = (struct account**)data;
    struct account *from = temp[0];
    struct account *to = temp[1];

    printf("Enter amount to transfer: "); // Amount to transact
    scanf("%d", &amount);
    transfer(from, to, amount);
    return NULL;
}

int main() {
    int num_accounts, num_transfers;
    int acc_num, acc_bal;
    int source, target;

    printf("Total number of accounts: ");
    scanf("%d", &num_accounts);printf("\n");

    if (num_accounts < 2) {
        printf("You need at least two accounts to perform transactions. Exiting.\n");
        return 1;
    }
    // Creating an array of accounts (dynamically allocated)
    struct account *accounts = (struct account*)malloc(num_accounts * sizeof(struct account));
    if (accounts == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    // Taking account details:
    for (int i = 0; i < num_accounts; i++)
    {
        printf("Enter details of Account %d:- \n", i+1);
        printf("Account Number: ");
        scanf("%d", &acc_num);
        printf("Current Balance: ");
        scanf("%d", &acc_bal);
        account_entry(&accounts[i], acc_num, acc_bal);
        printf("\n");
    }

    printf("Total transactions: ");
    scanf("%d", &num_transfers);

    if (num_transfers < 1) {
        printf("No transactions to perform. Exiting.\n");
        free(accounts);
        return 1;
    }

    // Creating An array of threads (dynamically allocated)
    pthread_t *threads = (pthread_t*)malloc(num_transfers * sizeof(pthread_t));
    if (threads == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        free(accounts);
        return 1;
    }

    for (int i = 0; i < num_transfers; i++) {
        printf(" ------ Transaction %d ------\n", i+1);
        printf("Transfer from account: ");
        scanf("%d", &source);
        printf("Transfer to account: ");
        scanf("%d", &target);
        fflush(stdin);
        if (source < 1 || source > num_accounts || target < 1 || target > num_accounts || source == target) {
            printf("Invalid account numbers. Exiting.\n");
            free(accounts);
            free(threads);
            return 1;
        }
        struct account *data[2];
        data[0] = &accounts[source - 1];
        data[1] = &accounts[target - 1];

        // Create threads for the specified transfer
        if (pthread_create(&threads[i], NULL, transfer_thread, &data) != 0) {
            printf("Error creating thread. Exiting.\n");
            free(accounts);
            free(threads);
            return 1;
        }
        pthread_join(threads[i], NULL);
        printf("\n");
    }

    // Final balances
    for (int i = 0; i < num_accounts; i++) {
        printf("Account number= %d Balance: %d\n", accounts[i].account_number, accounts[i].account_balance);
    }
    // Free allocated memory
    free(accounts);
    free(threads);
    return 0;
}

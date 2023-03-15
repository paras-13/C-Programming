// Program to calculate the amount of the bill for the job
// (a) Scanning and harcopy of a passport rupee 5 and if copies more than 10 then rupee 3
#include<stdio.h>
int main()
{
    int copy,amount;
    printf("Welcome to the scanning and hardcopy bill calculator");
    printf("\nPlease enter the number of copies you have made =");
    scanf("%d",&copy);
    if (copy<10 && copy>1){
        printf("Per copy charge is 5 rupee\n");
        amount = copy*5;
        printf("Final amount to pay = %d rupees\n",amount);
    }
    else if (copy>=10){
        printf("Per copy charge is 3 rupee\n");
        amount = copy*3;
        printf("Final amount to pay = %d rupees\n",amount);
    }
    else
    printf("Invalid number");
    return 0;
}
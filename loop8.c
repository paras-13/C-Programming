// Qs-1  Program to display alphabets as below:
// az by cx dw ev fu gt hs lr jq kp lo mn nm ol pk qj ri sh tg uf ve wd xc yb za

// Ques2 -> Program to display count values from 0 to 100 amd flash each digit for one second. 
// Reset counter after it reaches hundred. Use for loop



#include <stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

void ques1();void ques2();
int main()
{
    int ch;
    printf("Enter the question number which you want to ge displayed ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            ques1();
            break;
        case 2:
            ques2();
            break;
        default:
            printf("Wrong Input");
            break;
    }

}
void ques1()
{

    // --> Code Ques1
    int a = 97, z = 122;
    for (int i = 97; i <= 122; i++)
    {
        printf("%c%c  ", a, z);
        a++;
        z--;
    }
}
void ques2()
{

    // Code --> Qyes2
    int ch,res,a=1;
    while (a==1)
    {
        printf("Enter the time in second upto which you want to run the counter");
        scanf("%d",&ch);
        for (int i=0;i<=ch;i++)
    {
        system("cls");
        printf("%d",i);
        Sleep(1000);
    }
    printf("\nDo you want to reset the timer again. If yes enter 1 otherwise press 0 to exit");
    scanf("%d",res);
    if (res == 1)
    a = 1;
    else
    a = 0;
    }
}
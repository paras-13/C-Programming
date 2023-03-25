// Program to print numbers from 1 to 100 using only ascii numbers from 48 to 57.
#include<stdio.h>
int main()
{
    int n;
    printf("\n=====\t======\t======\t=====\t=====\t======\t======\t=======\t======\t=======\n");
    printf("\t\tPrinting numbers from 1 to 100 using ASCII numbers");
    printf("\n=====\t======\t======\t=====\t=====\t======\t======\t=======\t======\t=======\n\n");
    for (int i=48;i<=57;i++)
    {
        for (int j=48;j<=57;j++)
        {
            printf("%c%c\t",i,j);
        }
        printf("\n");
    }
    printf("100\n");
    printf("=====\t======\t======\t=====\t=====\t======\t======\t=======\t======\t=======\n");
    return 0;
}
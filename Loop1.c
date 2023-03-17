// Loop practise in C
// Write a program to count numbers between 1 to 100 not divisible by 2, 3 and 5
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Program to count how many numbers are divisible by 2,3 and 5 between 1 to 100\n");
    for (int i=1;i<=100;i++)
    {
        if (i%2 == 0 && i%3 == 0 && i%5 == 0)
        printf("%d",i);
        count++;
    }
    printf("%d are the total number of Numbers divisible by 2,3 and 5 between 1 to 100",count);
    return 0;
}
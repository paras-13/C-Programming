// Write a program to check whether the blood donor is eligible or not for donating blood. The conditions laid down are as umder. Use if statatement.
// a --> Age should be greater than 18 years but not more than 55 years.
// Weight should be more than 45kg

// --> Program in C to check whether the donor is eligible for blood donation or not
#include<stdio.h>
#include<Windows.h>
int check(int age,int weight);
int main()
{
    int age, weight;
    printf("Welcome to the blood donation campaign\n");
    printf("Here you are required to enter some eligibility details which are necessary to check whether you are eligible for donation or not");
    printf("\n-----------------------------------\n");
    printf("Enter your age =");
    scanf("%d", &age);
    printf("Enter your weight =");
    scanf("%d", &weight);
    printf("\n-------------------------------------\n");
    printf("\nChecking your eligibility........\n");
    Sleep(30);
    check(age,weight);
    return 0;
}
int check(int age,int weight)
{
    if (age>18 && age<55)
    {
        if (weight > 45)
        printf("Yes your are eligible for blood donation");
        else
        printf("No you are not eligible for blood donation");
    }
    else
    printf("No you are not eligible for blood donation");
}
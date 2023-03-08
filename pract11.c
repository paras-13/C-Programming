/*
Write a program to calculate energy bill. Read the starting and ending metre readings. 
If the consumed electricity energy is greater than ot equal to 200 units the rate should 
be 2.50/unit otherwise 1.50/unit.
*/

#include<stdio.h>
void main()
{
    int previous,current,final;
    float amount;
    printf("Enter previous reading =");
    scanf("%d",&previous);
    printf("Enter current reading= ");
    scanf("%d",&current);
    final = current-previous;
    if(final>=200)
    {
        amount = final*2.5;
        printf("Your total bill for %d units consumed this month is %f",final,amount);
    }
    else
    {
        amount = final*1.5;
        printf("Your total bill for %d units consumed this month is %f",final,amount);
    }
}
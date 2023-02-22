// Write a program to enter a number and carry out modular division by 2, 3 and 4 and display the remainders.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("Displaying remainder when divided by 2, 3 and 4\n");
    printf("Remainder on dividing with 2= %d\n",a%2);
    printf("Remainder on dividing with 3= %d\n",a%3);
    printf("Remainder on dividing with 4= %d",a%4);

}

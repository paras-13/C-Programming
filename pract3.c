//Write a orogram to shift the entered number by five bits right and display the result
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number = ");
    scanf("%d",&a);
    a>>=5;    // By 5 bits
    b =a;
    printf("After right shift by five bits = %d",b);
    return 0;
}
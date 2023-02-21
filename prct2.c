// Program to shift the entered number by three bits left and display the result
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number = ");
    scanf("%d",&a);
    a<<=3;
    b = a;
    printf("Left shift 3 bits = %d",b);
    return 0;
}

// Write a program to enter an integer number and display its equivalent values in octal and hexadecimal.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an number =");
    scanf("%d",&num);
    printf("%d in octal is %o\n",num,num);          // %o for octal
    printf("%d in hexadecimal is %X",num,num);      // %X for hexadecimal 
    return 0;
    
}
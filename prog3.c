//Program to declare and initialize variables and display them
#include<stdio.h>

void main()
{
    int age = 20;
    float height = 5.4;
    char gender = 'M';
    char name[10] = "Amit";
    printf("Age : %d \nFloat : %f \nGender : %c \nname : %s",age,height,gender,name);

    // Using some different modifiers
    // Type modifiers
    short t=1;
    long k=54111;
    unsigned u=10;
    signed j=-10;
    printf("\nt=%d",t);
    printf("\nt=%ld",k);
    printf("\nt=%u",u);
    printf("\nt=%d",j);

    // Type conversion
    
}
/*
# Data types in C:-

1. Basic Data Type :- int, char, float, double
2. Derived data types :- array, pointers, structure, union
3. Enumeration Data Types :- emum
4. Void Data Type :- void

--> Integer data type :-
    1. (int, short and long)
    ** Difference between short and long **

                    SHORT                           LONG
Space occupy :-    2 bytes                        4 bytes
Range :-        -32768 to 32767                 -2147483648 to 2147483647
Speed :-            Faster                         Slower
Format speceifer :-   %d %i                         %ld

    2. (Signed and unsigned)
    ** Difference between signed and unsigned 
                    SHINED                       UNSIGNED
Space occupy :-    2 bytes                        2 bytes
Range :-        -32768 to 32767                 0 TO 65535
By-default :-       Short signed                Short Unsigned
Format speceifer :-   %d %i                         %u

--> Float and doubles
    ** Difference between floats and doubles
                    Floats                         Doubles
Space occupy :-    2 bytes                         8 bytes
Range :-        3.4e-38 to 3.4e+38              1.7e-308 to 1.7e+308
Format speceifer :-   %f                               %lf

--> Char (Signed and Unsigned)
    88 Difference between signed and unsigned char
                Signed Character              Unsigned character
Space occupy :-    1 byte                        1 byte
Range :-          -128 to 127                   0 to 255
Format speceifer :-   %c                             %c

 A single character is written under single quotes while a string is written in double quotes
 %c --> char
 %i %d --> short or int
 %u --> unsigned int
 %ld --> long
 %lu --> unsigned long
 %g or %g -->float
 % lf --> double
//Program to declare and initialize variables and display them
*/
#include<stdio.h>

void main()
{
    int a;
    float b;
    char c;
    double d;
    a = 20;           // int
    b=72.1;           // float
    c='B';            // character
    d = 3.2e20;       // exponent

    printf("%i %f %c %lf\n",a,b,c,d);    // simply printing

    // By default a normal floating point point number is printed upto a length of 6 digits after decimal
    // Let say we need two decimal places after the decimal point
    printf("%i %.3f %c %.19f",a,b,c,d);

    int age = 20;
    float height = 5.4;
    char gender = 'M';
    char name[10] = "Amit";
    printf("Age : %d \nFloat : %f \nGender : %c \nname : %s",age,height,gender,name);

// Type modifiers --> Keyword suvh as unsigned, short, signed and long are type modifiers. It changes the basic meaning of basic data type and produce a new data type.
    short t=1;
    long k=54111;
    unsigned u=10;
    signed j=-10;
    printf("\nt=%d",t);
    printf("\nt=%ld",k);
    printf("\nt=%u",u);
    printf("\nt=%d",j);
}
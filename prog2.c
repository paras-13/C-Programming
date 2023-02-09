// Tokens in C
/*
1. --> Keywords:- Reserved by compiler. Their are 32 key-words
2. --> Variables:- User defined,
3. --> Constants:- Assigned to variables
4. --> Operators:- Used in expressions
5. --> Special Characters:- For different declarations in C
6. --> Strings:- A sequence of characters

# Data types in C:-
1. Basic Data Type :- int, char, float, double
2. Derived data types :- array, pointers, structure, union
3. Enumeration Data Types :- emum
4. Void Data Type :- void

 A single character is written under single quotes while a string is written in double quotes
 %c --> char
 %i %d --> short or int
 %u --> unsigned int
 %ld --> long
 %lu --> unsigned long
 %g or %g -->float
 % lf --> double
*/
#include <stdio.h>
int main(){
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
    printf("%i %.2f %10c %.2lf",a,b,c,d);
    return 0;
    
}
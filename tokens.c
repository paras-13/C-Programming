/*
// Tokens in C

1. --> Keywords:- Reserved by compiler. Their are 32 key-words
2. --> Identifiers:- User defined, name of (variables, functions and arrays,etc)
3. --> Constants:- Assigned to variables(fixed value -- do not change)
            --> Numerical Contants:-
                    --> Integer Constants:- from 0 to 9, minimum 2 bytes to 4 bytes
                             * can be represented in Octal and Hexa decimal Number system:
                            --> eg for octal :- 027, 025, 023 .....
                            --> eg for hexa :- 0X9, 0Xa5
                    --> Real constants :- floating-pint constants.
                            --> eg :- 5.21, 6.33, 2.4E+10. 1.2E-10

            --> Character Constant :-
                    --> Single character constant :- A single character,Represented in single quotes
                            --> eg  :- 'B', '2', '_'
                    --> String constant :- Sequence of characters, represented in double quotes
                            --> eg :- "Hello", "World", "India", "555" 
    # Programming example below 

4. --> Operators:- Used in expressions
5. --> Special Characters:- For different declarations in C
6. --> Strings:- A sequence of characters
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
    int age = 20;
    float height = 5.4;
    char gender = 'M';
    char name[10] = "Amit";
    printf("Age : %d \nFloat : %f \nGender : %c \nname : %s",age,height,gender,name);
    // // By default a normal floating point point number is printed upto a length of 6 digits after decimal
    // // Let say we need two decimal places after the decimal point
    // printf("%i %f %c %f",a,b,c,d);
    return 0;

}
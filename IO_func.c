#include<stdio.h>
#include<conio.h>
// Three types of Unformatted functions

//--> Character I/O
//--> String I/O
//--> File I/O


// getchar() --> Read character type data from standard input, Reads one character at a time till the user press the enter key.

int main()
{
/*
    int c;
    printf("nEnter a char :");
    c = getchar();
    printf("%d\n",c);

// putchar() --> print one character at a time on the screen
    putchar(c); 
*/
// getch() & getche() --> Take any alpha numeric character from the standard input
// getch accepts a character but does not display it
    char c,d;
    printf("Enter a number =");
    d = getche();
    c = getch();
    printf("You presses =");
    putch(c);
    return 0;
}
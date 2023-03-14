// Write a program to display the names of the days of a week.

#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day number between 1 to 7\n");
    scanf("%d",&day);
    for(int i=1;i<=day;i++)
    switch(i)
    {
        case 1:
        printf("1st day of week is Sunday\n");
        break;
        case 2:
        printf("2nd day of week is Monday\n");
        break;
        case 3:
        printf("3rd day of the week is Tuesday\n");
        break;
        case 4:
        printf("4th day of the week is Wednesday\n");
        break;
        case 5:
        printf("5th day of the week is Thursday\n");
        break;
        case 6:
        printf("6th day of the week is Friday\n");
        break;
        case 7:
        printf("7th day of the week is Saturday\n");
        break;
        default :
        printf("Invalid day");
    }
    return 0;
}
// Program to count number of votes secured by 'A' and 'B'. 
// Also count the invalid votes
#include<stdio.h>
#include<stdbool.h>
#include<windows.h>
int main()
{
    int count=1,A=0,B=0,I=0,sel;
    char vote;
    bool key=true;
    printf("Vote counter\n");
    while (key == true)
    {
        fflush(stdin);
        printf("Cast one vote among A or B\n");
        printf("VOTER NO. %d =",count);
        scanf("%c",&vote);
        if (vote=='A' || vote =='a')
        A++;
        else if(vote == 'B' || vote == 'b')
        B++;
        else
        I++;
        count ++;
        printf("Select 1 to continue voting or press 0 to terminate");
        scanf("%d",&sel);
        if (sel == 1)
        key = true;
        else
        key = false;
        fflush(stdin);
    }
    printf("Voting is over, Now it's time to count");
    printf("\nCounting is in process\n");
    Sleep(3000);
    printf("Status --->\n");
    printf("A secured %d votes\n",A);
    printf("B secured %d votes\n",B);
    printf("Invalid votes = %d\n",I);
    if (A>B)
    printf("\nCongratulations!!. A won the elections");
    else 
    printf("\nCongratulations!!. B won the elections");
    return 0;
}
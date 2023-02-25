// Jump statements
// break, continue, goto, revoke
#include<stdio.h>
int main()
{
/*
    // break statement --> breaks the program execution and comes out of the loop.
    int n, i, sum=0;
    for(;;)                 // Infinite loop
    {
        printf("Enter a number =");
        scanf("%d",&n);
        if (n<0)
        break;
        else
        sum += n;
    }
    printf("sum=%d",sum);

*/
    // continue statement --> 
    int n1, j=1,even=0;
    while(j<=5)                
    {
        j++;
        printf("Enter a number =");
        scanf("%d",&n1);
        if (n1%2 !=0)
        continue;
        else
        even += n1;
        
    }
    printf("even_sum=%d",even);

int age;
printf("Enter your age:");
scanf("%d", &age);
if(age>=18)
goto Vote;
else
goto NoVote;
Vote:
printf("you are eligible for voting");
return;
NoVote:
printf("you are not eligible to vote");
return 0;
}


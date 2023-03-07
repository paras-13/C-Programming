// Class 22-02-2023

// Loops --> for while and do while
#include<stdio.h>

//for loop

int main()
{
int i;
for(i=2;i<=6;i++)
{
printf("floor climbed\n");
}
return 0;
}

//While loop
int main()
{
int i=2;
while(i<=6)
{
printf("floor climbed\n");
i++;
}
return 0;
}

//do while
int main()
{
int i=2;
do
{
printf("floor climbed\n");
i++;
}while(i<=6);
return 0;
}


// do - while with switch case
//fflush(stdin) is used to clear the input buffer and take new input entered bu the user.
int main()
{
char another ;
int a,b,res;
char choice;
do
{
printf("Press + for add\n");
printf("Press - for sub\n");
printf("Press * for mul\n ");
printf("enter your choice");
fflush(stdin);
scanf("%c",&choice);
switch(choice)
{
case '+':
printf("enter inputs=");
scanf("%d%d",&a,&b);
res=a+b;
printf("sum=%d",res);
break;
default:
printf("invalid choice");
break;
case '-':
printf("enter inputs=");
scanf("%d%d",&a,&b);
res=a-b;
printf("sub=%d",res);
break;
case '*':
printf("enter inputs=");
scanf("%d%d",&a,&b);
res=a*b;
printf("mul=%d",res);
break;
}
printf ( "\nWant to enter another number y/n " ) ;
fflush(stdin);
scanf ("%c", &another ) ;
} while ( another == 'y'||another=='Y' ) ;

return 0;
}

// Sum of digits of a number
int main()
{
    int n,sum=0,a;
    printf("Enter a number = ");
    scanf("%d",&n);
    while (n!=0)
    {
        a = n%10;
        sum += a;
        n /= 10;
    }
printf("%d",sum);
return 0;
}

// Reverse of a number
int main()
{
    int n,rev=0,a;
    printf("Enter a number = ");
    scanf("%d",&n);
    while (n!=0)
    {
        a = n%10;
        rev = rev*10 + a;
        n /= 10;
    }
printf("%d",rev);
    
// Palindrome number of a number
    int n, rev = 0, a, t;
    printf("enter any number=");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    printf("rev=%d\n", rev);
    if (t == rev)
        printf("no is palindrome");
    else
        printf("no is not palindrome");
return 0;
}

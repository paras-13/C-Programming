// Program to mask the most significant digit of the entered number.Use AND operator

// Using bitwise and
# include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter two numbers = ");
    scanf("%d%d",&n1,&n2);
    printf("Finding most significant digit for the two numbers\n");
    n3 = n1&n2;
    printf("%d",n3);
    return 0;
}
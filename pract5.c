// Program to enter two numbers and find the smallest out of them

#include<stdio.h>
int main()
{
    int n1,n2,ans;
    printf("Enter two numbers = ");
    scanf("%d%d",&n1,&n2);
    ans = n1<n2?n1:n2;
    printf("%d is the smaller number",ans);
}
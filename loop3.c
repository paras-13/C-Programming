// Program to find perfect square number upto a desired users choice
#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,count=0;
    float c;
    printf("Enter a number upto which you want to find perfect square number =");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        c = sqrt(i);
        x = floor(c);
        if (x==c)
        {
            printf("%5d\t",i);
            count ++;
        }
    }
    printf("\nTotal count is = %d",count);
    return 0;
}
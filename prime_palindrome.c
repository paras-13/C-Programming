#include<stdio.h>
int palindrom(int);
int main()
{
    int n,flag=0,res;
    scanf("%d",&n);
    for (int i=2;i<=n/2;i++)
    {
        if (n%i == 0){
        flag = 1;
        break;
        }
    }
    if (flag==0){
        res=palindrom(n);
        if (res == 1)
        printf("YES");
        else
        printf("NO");
    }
    else
    printf("NO");
    return 0;
}
int palindrom(int x)
{

    int rev,temp = x,sum=0;
    while (x!=0)
    {
        rev = x%10;
        sum = sum*10+rev;
        x = x/10;
    }
    if (sum == temp)
    return 1;
    else
    return 0;
}
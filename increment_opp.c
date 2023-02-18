#include<stdio.h>
int main()
{
    // Using increment operator as a suffix
    int a,z,x=10,y=20;
    z=x*y++;
    a=x*y;
    printf("\n%d %d",z,a);

    // Using increment operator as a prefix
    z=x*++y;
    z=x*y;
    printf("\n%d %d",z,a);
    return 0;
}


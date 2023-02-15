// # Class 15-02-2023
#include<stdio.h>
int main()
{
    /*
    Ternery operator in C
    Conditional operator.
    int a,b,c;
    printf("Enter the values =");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("%d is greater",c);
    //alternative method
    // a>b?printf("%d is greater",a):printf("%d is greater",b);
    

    // Bitwise operators
    int a=5,b=7;
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",~a);
    printf("%d\n",25<<3);
    printf("%d\n",25>>3);
    */


   // Swapping two numbers in C
    int p,q,r;
    printf("Enter the values = \n");
    scanf("2q%d%d",&p,&q);
    printf("Values before swapping\n");
    printf("p=%d\tq=%d",p,q);
    r=q;
    q=p;
    p=r;
    printf("Values after swapping\np=%d\tq=%d",p,q);
    return 0;

}
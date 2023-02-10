// Class1 
#include <stdio.h>
int main()
{
    int a,b,sum,mult,div;                            // Decclaration of variables
    printf("Enter the value of a and b=");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("Sum of a and b is %d",sum);
    printf("\n%d + %d = %d",a,b,sum);
    mult = a*b;
    printf("\nMultiplication of  a and b %d * %d = %d",a,b,mult);
    div = a/b;
    printf("\nDivision of a and b %d / %d = %d",a,b,div);
    return 0;
}

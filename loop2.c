// Series question loop in C
// Series -->
// 1) x = 1/1 + 1/4 + 1/9 + ..... + 1/n^2
// 2) x = 1/1 + 1/8 + 1/27 +............+ 1/n^3
// 3) x + (x^2)/2! + (x^3)/3! ......... + n
// 4) 1+x+x^2+x^3+.................+x^n
// 5) x + (x^2)/2! + (x^4)/4! ............... (x^n)/n!
// 6) 1- 1/1! + 2/2! - 3/3! + 4/4!................n/n!

// Code -->
#include <stdio.h>
#include <math.h>
float ser1();
float ser2();
float ser3();
float ser4();
float ser5();
float ser6();
int main()
{
    int ch;
    printf("Enter which series you want to display =");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf(" First series---->\n");
        float s1 = ser1();
        printf("Solution of first series =%f\n", s1);
        break;
    case 2:
        printf("Second series---->\n");
        float s2 = ser2();
        printf("Solution of second series =%f\n", s2);
        break;
    case 3:
        printf("Third series---->\n");
        float s3 = ser3();
        printf("Solution of third series =%f\n", s3);
        break;
    case 4:
        printf("Fourth series---->\n");
        float s4 = ser4();
        printf("Solution of fourth series =%f\n", s4);
        break;
    case 5:
        printf("Fifth series---->\n");
        float s5 = ser5();
        printf("Solution of fifth series =%f\n", s5);
        break;
    case 6:
        printf("Sixth series---->\n");
        float s6 = ser6();
        printf("Solution of sixth series =%f\n", s6);
        break;
    default:
        printf("Wrong entry --- Try again.\n");
        break;
    }
}
float ser1() // First Series
{
    int n;
    float sum = 0;
    printf("Enter value of n =");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        sum += 1 / pow(i, 2);
    }
    return sum;
}
float ser2() // Second series
{
    int n;
    float sum = 0;
    printf("Enter value of n =");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        sum += 1 / pow(i, 3);
    }
    return sum;
}
float ser3() // Third series
{
    int n, x, fact = 1;
    float sum = 0;
    printf("Enter value of x =");
    scanf("%d", &x);
    printf("\nEnter value of n =");
    scanf("%d", &n);
    for (float i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += pow(x, i) / fact;
        fact = 1;
    }
    return sum;
}
float ser4() // Fourth series
{
    int n, x;
    float sum = 0;
    printf("Enter a value of x =");
    scanf("%d", &x);
    printf("\nEnter value of n =");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum += pow(x, i);
    }
    return sum;
}
float ser5() // Fifth series
{
    int n, x;
    float sum = 0, fact = 1;
    printf("Enter value of x =");
    scanf("%d", &x);
    printf("\nEnter value of n =");
    scanf("%d", &n);
    sum = x;
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += pow(x, i) / fact;
        fact = 1;
    }
    return sum;
}
float ser6()
{
    int n;
    float sum = 1.0,fact=1;
    printf("Enter value of n =");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        if (i % 2 == 0)
            sum += i /fact;
        else
            sum -= i /fact;
        fact = 1;
    }
    return sum;
}

// Class 22-03-2023  Wednesday (Array Concepts)

#include <stdio.h>
int main()
{
    float a[5], max = 0.0;
    int i, n;
    printf("enter the no of elements=");
    scanf("%d", &n);
    printf("\nenter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("max=%.1f", max);
//////////////////////////////////////////////////
    int a[5];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    scanf("%d", &a[2]);
    scanf("%d", &a[3]);
    scanf("%d", &a[4]);
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);

////////////////////////////////////////////////////////////

    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t%u\n", a[i], &a[i]);
    }
    
/////////////////////////////////////////////////////////////

    int a[5], i, n;
    printf("enter the no of elements=");
    scanf("%d", &n);
    printf("\nenter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe elements with their address are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%u\n", a[i], &a[i]);
    }
    printf("\n%u\t%u", a + 1, &a + 1);

//////////////////////////////////////////////////////////////////

    int a[5], i, n, sum = 0;
    printf("enter the no of elements=");
    scanf("%d", &n);
    printf("\nenter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("sum=%d", sum);

///////////////////////////////////////////////////////////////

    float a[5], sum = 0.0, avg;
    int i, n;
    printf("enter the no of elements=");
    scanf("%d", &n);
    printf("\nenter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("avg=%.3f", avg);
    return 0;
}
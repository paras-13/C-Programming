// Sum of diagonal and all the elements of the matrix
#include<stdio.h>
int main()
{
    int a[3][3], i, j, sumall, sumd;
    printf("Enter the elements");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter the values of a[%d][%d]",i, j);
            scanf("%d%d", &i, &j);
            sumall += a[i][j];
            if (i == j)
            sumd += a[i][j];
        }
    }
    printf("Sum of all elements of the array is = %d",sumall);
    printf("Sum of diagonal elements of the array is = %d",sumd);
}
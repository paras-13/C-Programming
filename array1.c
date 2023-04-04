// Program to display array elements with their addresses
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to enter in the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements -->\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element -->",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int j=0;j<n;j++)
    {
        printf("%d element is %d and address at which it is stored is %u.\n",j+1, arr[j], &arr[j]);
    }
    return 0;
}
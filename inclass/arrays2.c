// Deletion
#include<stdio.h>
int main()
{
    int a[10], pos, i, n;

    printf("Enter number of elements in array");
    scanf("%d",&n);
    printf("Enter %d elements", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the location where you wish to delete from an array");
    scanf("%d",&pos);
    for (i = pos-1; i<n ; i++)
    {
        a[i] = a[i+1]
    }
}
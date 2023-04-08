// Array passed to a function

#include<stdio.h>
void array(int a[]);
int main()
{
    int arr[7]={1,5,3,8,4,9,7},i;
    for (i=0;i<7;i++)
    {
        printf("%d\n",&arr[i]);
    }
    printf("%d\n",&arr);
    array(arr);
    for (i=0;i<7;i++)    printf("%d\t",arr[i]);
    return 0;
}
void array(int a[])
{
    int b=5;
    for (int i=0;i<7;i++)
        a[i] = a[i]+b++;
}
// Functions in C
// Class 01-03-2023

// Functions in C
 // Average of five numbers
#include<stdio.h>
float avg(float,float,float,float,float);
int main()
{
    float n1,n2,n3,n4,n5,result;
    printf("Enter 5 five values to calculate average =");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    result = avg(n1,n2,n3,n4,n5);
    printf("Average of five numbers is =%.2f",result);
    return 0;
}
float avg(float n1,float n2,float n3,float n4,float n5)
{
    float avg;
    avg = (n1+n2+n3+n4+n5)/5;
    return avg;
}
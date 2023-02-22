// Program to find average temperature of five sunny days. Assume the temperature in Celsius.
#include <stdio.h>
int main()
{
    int d1,d2,d3,d4,d5,avg;
    printf("Enter temperature in five different days\n");
    printf("Day 1=");
    scanf("%d",&d1);
    printf("Day 2=");
    scanf("%d",&d2);
    printf("Day 3=");
    scanf("%d",&d3);
    printf("Day 4=");
    scanf("%d",&d4);
    printf("Day 5=");
    scanf("%d",&d5);
    avg = (d1+d2+d3+d4+d5)/5;
    printf("Average temperature recorded in five days is %d degree celsius",avg);
    return 0;

}

// Program to enter two numbers. Make a comparison between them with a conditional operator. If the first number is greater than the second perform multiplication otherwise division operation.
#include <stdio.h>
int main()
{
    int num1,num2,res;
    printf("Enter two numbers =");
    scanf("%d%d",&num1,&num2);
    res=num1>num2?num1*num2:num1/num2;
    printf("Final answer is %d",res);
    return 0;
}
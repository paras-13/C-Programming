// Class 10-02-2023
#include<stdio.h>
int main()
{
    // float a,b;
    // int div;
    // scanf("%f %f",&a,&b);
    // div = a/b;
    // printf("%d",div);
    // return 0;

    // Area of triangle 
    // float b,h,aot;
    // float a = 3.5;
    // printf("Enter the value of base and height");
    // scanf("\n%f %f",&b,&h);
    // aot = (float)1/(float)2*b*h;
    // printf("Area of triangle = %f",aot);

    // // Type casting --> Explicit
    // printf("\n%f",a);
    // printf("\n%d",(int)a);

    // // Modulas operator only work for integer in C <Both inputs must be integer>
    // int x,y;
    // float z;
    // printf("\nEnter the value of a and b=");
    // scanf("\n%d%d",&x,&y);
    // z = x%y;            // Modulas operator
    // printf("%f",z);
    
    // Prefix and Postfix
    int p=3,q,r,a=8;
    // q=p++;
    // r=++p;
    // printf("\n%d\n%d\n%d",p,q,r);
    printf("\n%d",a++);
    printf("\n%d",++a);
    a++;
    ++a;
    printf("\n%d",--a);
    printf("\n%d",a--);
    a--;
    printf("\n%d",a);
    return 0;
}
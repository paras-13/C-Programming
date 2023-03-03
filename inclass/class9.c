// Call by refrence 
// Functions 
/*
#include<stdio.h>
void swap(int,int);
int main()
{
int a,b;
printf("enter the values\n");
scanf("%d%d",&a,&b);
printf("Values before swapping\n");
printf("a=%d\tb=%d\n",a,b);
swap(a,b);
printf("Values after swapping\n");
printf("a=%d\tb=%d\n",a,b);
return 0;
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("values in function\n");
printf("x=%d\ty=%d\n",x,y);
}

#include<stdio.h>

int main()
{
int a=30;
int *p=&a;
printf("%d\n",a);//Value of a 30
printf("%d\n",p);//Value of p i.e. address of a
printf("%d\n",&a);//Address of a
printf("%d\n",&p);//Address of p
printf("%d\n",*p);//value at address which pointer variable holds
*p=25;
printf("%d\n",a);
printf("%d\n",*p);
return 0;
}
*/
//Call by reference
#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("enter the values\n");
scanf("%d%d",&a,&b);
printf("Values before swapping\n");
printf("a=%d\tb=%d\n",a,b);
swap(&a,&b);
printf("Values after swapping\n");
printf("a=%d\tb=%d\n",a,b);
return 0;
}
void swap(int *x,int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
printf("values in function\n");
printf("x=%d\ty=%d\n",*x,*y);
}

#include<stdio.h>
int sum(int);
int main()
{
int n,r;
printf("enter the value of n=");
scanf("%d",&n);
r=sum(n);
printf("%d",r);
return 0;
}
int sum(int n)
{
if(n==1)
return 1;
else
return n+sum(n-1);
}
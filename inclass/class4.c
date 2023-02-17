// CLass 17-02-2023
#include<stdio.h>
int main()
{
    // sizeof() is not a function it's an operator
    printf("int = %d\n",sizeof(int));
    printf("short int = %d\n",sizeof(short int));
    printf("float = %d\n",sizeof(float));
    printf("long int = %d\n",sizeof(long int));
    printf("char = %d\n",sizeof(char));
    printf("double = %d\n",sizeof(double));
    printf("long double=  %d\n",sizeof(long double));
    printf("unsigned int=  %d",sizeof(unsigned int));

    
    // comma
    int a,b;
    a=4,5;
    b = (4,5),6;
    printf("%d%d",&a,&b);
    return 0;
}
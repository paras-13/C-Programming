// Class 8 continued
// Using header file math.h
#include<stdio.h>
#include<math.h>
int main()
{
double x=9.0,y=8.0,z=7.0;
printf("\nLog value is:%lf",log(x));
printf("\nLog value with base 10 is:%lf",log10(x));
printf("\nExponential value is:%lf",exp(x));
printf("\n Ceil value is:%lf",ceil(8.94));
printf("\n Floor value is:%lf",floor(2.34));
printf("\n Power:%lf",pow(3.0,2.0));
printf("\n Floating absolute is:%lf",fabs(-2.9));
printf("\n Square root value is:%lf",sqrt(9));
printf("\n Sin:%f,cos:%f,tan:%lf",sin(x),cos(y),tan(z));
printf("\n fMod:%f",fmod(2.0,1.5));
return 0;
}
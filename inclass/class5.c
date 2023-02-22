// Decision making or conditional making statements.


#include<stdio.h>
int main()
{ int age;
printf("enter your age");
scanf("%d",&age);
if(age>=18)
printf("person is eligible for voting");
else
printf("person is not eligible");
return 0;
}


int main()
{ int n;
printf("enter any number");
scanf("%d",&n);
if(n%2==0)
printf("%d is even",n);
else
printf("%d is odd",n);
return 0;
}



int main()
{ int n;
printf("enter any number");
scanf("%d",&n);
if(n%2==0 && n%5==0)
printf("%d is divisible",n);
else
printf("%d is not divisible",n);
return 0;
}

int main()
{ int a;
scanf("%d",&a);
printf("%d %c",a,a);
return 0;
}

int main()
{ char a;
scanf("%c",&a);
printf("%c %d",a,a);
return 0;
}




#include<stdio.h>
int main()
{ char ch;
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E')//complete it
printf("entered character is vowel");
else
printf("entered character is not vowel");
return 0;
}


int main()
{ int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is greatest",a);
else if(b>a && b>c)
printf("%d is greatest",b);
else
printf("%d is greatest",c);
return 0;
}

int main()
{ int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("%d is greatest",a);
else if(b>a && b>c)
printf("%d is greatest",b);
else if(c>a && c>b)
printf("%d is greatest",c);
return 0;
}
# include <stdio.h>
// Multiplication table of a number 
int main(){
    int n;
    printf("Enter the number for which multiplication table you want to make\n");
    scanf("%d",&n);
    printf("Printing the table\n");
    for (int i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
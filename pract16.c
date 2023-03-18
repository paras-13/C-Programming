#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,rev,sum=0;
    scanf("%d", &n);
    for (int i=1;n>0;i++)
    {
        rev = n%10;
        sum += rev;
        n = n/10;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

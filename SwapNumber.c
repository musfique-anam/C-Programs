#include <stdio.h>

int main () {
    int a,b,temp;
    printf("Enter a number A : ");
    scanf("%d",&a);
    printf("Enter a number B : ");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;

    printf("After swapping, the numbers are A = %d and B = %d\n",a,b);
    return 0;
}
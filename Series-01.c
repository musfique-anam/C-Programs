//Series : 1+4+9+16+.....=Sum
#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+(i*i);   
    }
    printf("Sum of the series : %d",sum);
    return 0;
}
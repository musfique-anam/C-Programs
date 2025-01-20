//Sum of Natural Numbers
#include<stdio.h>
int main(){
    int sum=0,n;
    do{
        printf("Enter a positive integer: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=1;i<=n;++i){
        sum +=i;
    }

    printf("Sum = %d",sum);
    return 0;
}
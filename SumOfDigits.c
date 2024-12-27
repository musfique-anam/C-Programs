
#include <stdio.h>

int main() {
    int num,sum=0,reminder;

    printf("Enter an integer: ");
    scanf("%d",&num);

    while(num != 0){
        reminder =num%10;
        sum+=reminder;
        num /=10;
    }

    printf("Sum of Digits = %d\n",sum);

    return 0;
}
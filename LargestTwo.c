#include <stdio.h>

int main(){
    int num1,num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if(num1>num2){
        printf("The largest number is: %d\n",num1);
    }else if(num2>num1){
        printf("The largest number is: %d\n",num2);
    }else{
        printf("Both numbers are equal: %d",num1);
    }

    return 0;
}
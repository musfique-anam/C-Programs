#include<stdio.h>
#include<math.h>

int main() {
    double base,exponent,result;
    printf("Enter the base and exponent: ");
    scanf("%lf %lf",&base,&exponent);

    result=pow(base,exponent);
    printf("%.2f^%.2f = %.2lf\n",base,exponent,result);

    return 0;
}
/* This program will convert temperature from
Centigrade to Fahrenheit */

#include <stdio.h>

int main () {
    int C;
    float F;
    printf("Enter the temperature(in Centigrade): ");
    scanf("%d",&C);
    F=(C/0.555555555)+32;
    printf("%.6f degrees Fahrenheit",F);
    return 0;
}
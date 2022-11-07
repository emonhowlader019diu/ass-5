#include <stdio.h>

float addition(float first, float second){
    return first + second;
}

float subtraction(float frist, float second){
    return frist - second;
}

float multiplication(float frist, float second) {
    return frist * second;
}

float divition(float first, float second) {
    return first / second;
}

void main(){
    float a,b;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("%.2f + %.2f = %.2f\n", a, b, addition(a, b));
    printf("%.2f - %.2f = %.2f\n", a, b, subtraction(a, b));
    printf("%.2f * %.2f = %.2f\n", a, b, multiplication(a, b));
    printf("%.2f / %.2f = %.2f\n", a, b, divition(a, b));
}
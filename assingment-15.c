#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("You entered %d and %d, their sum is: %d", a, b, a+b);
}

#include <stdio.h>
int main(){
    float u, v, a;
    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter final velocity: ");
    scanf("%f", &v);

    printf("Enter acceleration: ");
    scanf("%f", &a);

    float t = (v-u)/a;
    printf("Required Time: %.2f", t);

}

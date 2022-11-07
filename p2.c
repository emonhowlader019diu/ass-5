#include <stdio.h>
int main(){
    float time, priciple, rate;
    printf("Enter rate:");
    scanf("%f", &rate);

    printf("\nEnter time:");
    scanf("%f",&time);

    printf("\nEnter priciple:");
    scanf("%f", &priciple);

    float users_interest = (rate * priciple * time)/ 100;
    printf("My interest will be: %f\n", users_interest);


    return 0;
}
#include <stdio.h>

int main(){
    int held, attended;

    printf("Total class: ");
    scanf("%d", &held);

    printf("Total attended: ");
    scanf("%d", &attended);

    float percentage = ( 100 * attended ) / held;
    int is_allowed = percentage >= 75 ? 1 : 0;

    printf("Percentage of class attended: %.2f%%\n", percentage);
    if(is_allowed) {
        printf("You are allowed");
    } else {
        printf("You are not allowed");
    }

}
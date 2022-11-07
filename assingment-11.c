#include <stdio.h>
int main(){
    float time_space_x, expense_space_x, time_blue_origin, expense_blue_origin;
    
    printf("Enter hours for SpaceX: ");
    scanf("%f", &time_space_x);

    printf("Enter expense for SpaceX: ");
    scanf("%f", &expense_space_x);

    printf("Enter hours for Blue Origin: ");
    scanf("%f", &time_blue_origin);

    printf("Enter expense for Blue Origin: ");
    scanf("%f", &expense_blue_origin);
    float cost_space_x = expense_space_x / time_space_x;
    float cost_blue_origin = expense_blue_origin / time_blue_origin;
     if(cost_space_x > cost_blue_origin){
        printf("Blue origin is cheaper");
    } else {
        printf("SpaceX is cheaper");
    }
}


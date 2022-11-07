#include <stdio.h>

int main(){
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if(a == 0) {
        printf("Result is: You should not enter zero!");
    } else if(a%2 == 0){
        printf("Result is: %d", a/2);
    } else if(a%2 != 0) {
        printf("Result is: %d", a*3);
    }
}
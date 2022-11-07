#include <stdio.h>
int main(){
    int x, y, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter another number: ");
    scanf("%d", &y);

    for(int i = x; i <= y; i++){
        if(i % 4 == 0) {
           count++;
        }
    }

    printf("Total %d numbers are divisible by 4", count);
}
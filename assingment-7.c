#include <stdio.h>

void main(){
    int x[10];
    int count_odd = 0;
    int sum_odd = 0;
    float average;

    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }

    for(int j = 0; j < 10; j++) {
        if(x[j] % 2 != 0) {
            count_odd++;
            sum_odd += x[j];
        }
    }

    average = sum_odd / count_odd;
    printf("Average of odd numbers is %f", average);

}
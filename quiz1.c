#include <stdio.h>
int main(){
    int even=0;
    int odd=0;
    int number[10];
    for (int i=0; i<=9; i++){
        scanf("%d", &number[i]);
    }
    for (int j=0; j<=9; j++){
        if(number[j]%2==0){
        even++;}


    else{
        odd++;
    }


    }
    printf("%d\n", even);
    printf("%d", odd);
}
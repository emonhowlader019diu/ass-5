#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    int sum = 0;
    for(i = 1; i <= n; i++){
        if(i % 2 == 0 && i % 3 == 0){
           sum = sum + i;
        }
    }
    printf("the sum is: %d", sum);
  return 0;  
}
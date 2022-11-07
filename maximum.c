#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int z;
    scanf("%d", &z);
    if(x>y && x>z){
    printf("%d", x);
    }else if (y>z && y>x){
        printf("%d", y);
    }else if (z>x && z>y){
        printf("%d", z);
    }
}
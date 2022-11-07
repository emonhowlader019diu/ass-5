#include <stdio.h>
int main(){
    int n;
    float sum=0;
    scanf("%d",&n);
    for(float i=0; i<=n; i++){
        sum=sum+i;

    }    
        float average =sum/n;
        printf("ave=%f",average);
        
}
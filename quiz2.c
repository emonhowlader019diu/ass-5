#include<stdio.h>
int main(){
    int marks;
    scanf("%d", &marks);
    if (marks>100)
    {
        printf("impossible");
    }else if (marks>=80){
        printf("cgpa 4");
    }
    else if (marks>=70){
        printf("cgpa 3.5");
    }
    else if (marks>=60){
        printf("cgpa 3.25");
    }
    else if (marks>=50){
        printf("cgpa 3");
    }
    else if (marks>=40){
        printf("cgpa 2.95");
    }
    else if (marks<40){
        printf("fail");
    }

    
}

#include <stdio.h>

int main(){
    int exam_start = 10;
    int exam_end = 12;
    int current_time = 8;

    float ride_time;
    int max_time = exam_start - current_time;

    printf("How much time pathaw ride will take? ");
    scanf("%f", &ride_time);
    
    if( ride_time <= max_time) {
        printf("Aya Porsi");
    } else if(ride_time+current_time > exam_start && ride_time + current_time <= exam_end ) {
        printf("Shuru Hoye Gelo");
    } else
     {
        printf("Khaise");
    }

}
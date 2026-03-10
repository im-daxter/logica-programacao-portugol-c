#include <stdio.h>

int main (){

    int duration, hours, minutes, seconds, leftover;

    printf("Enter the duration in seconds: ");
    scanf("%d", &duration);

    hours = duration / 3600;
    leftover = duration % 3600;

    minutes = leftover / 60;
    seconds = leftover % 60;

    printf("Hour:Minutes:Seconds \n%d:%d:%d \n", hours, minutes, seconds);

    return 0;
}

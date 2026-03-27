#include <stdio.h>

int main() {

    int hour;

    printf("What time is it?: ");
    scanf("%d", &hour);

    if ( hour < 12 ){
	printf("Good Morning!");
    }
    else if ( hour < 18 ){
	printf("Good Afternoon!");
    }
    else {
	printf("Good Night!");
    }

}

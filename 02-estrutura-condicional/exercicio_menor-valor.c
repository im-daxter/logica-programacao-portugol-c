#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("\n================================================================\n");
    printf(" This program will show the lowest number between three numbers \n");
    printf("================================================================\n\n");


    printf("Insert any integer value: ");
    scanf("%d", &num1);

    printf("Insert another integer value: ");
    scanf("%d", &num2);

    printf("Insert another integer value: ");
    scanf("%d", &num3);


    printf("\n\nYour first value: %d\n", num1);
    printf("Your second value: %d\n", num2);
    printf("Your third value: %d\n", num3);

    if ( num1 < num2 && num1 < num3 ) {
	printf("Lower Value: %d\n", num1);
    }
    else if ( num2 < num3 ) {
	printf("Lower value: %d\n", num2);
    }
    else {
	printf("Lower value: %d\n", num3);
    }


    return 0;
}

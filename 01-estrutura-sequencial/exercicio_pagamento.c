#include <stdio.h>

int main() {

    char nameCoworker[100];
    double hourValue, hourWorked, payment;

    printf("Name: ");
    scanf(" %[^\n]", nameCoworker);

    printf("Value per hour: ");
    scanf("%lf", &hourValue);

    printf("How many hours were worked: ");
    scanf("%lf", &hourWorked);

    payment = hourValue * hourWorked;

    printf("The %s payment will be $%.2f\n", nameCoworker, payment);

    return 0;
}

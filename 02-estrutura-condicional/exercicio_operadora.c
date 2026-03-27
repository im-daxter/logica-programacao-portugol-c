#include <stdio.h>

int main() {

    double minutes, totalBill;


    printf("\n===============================================\n");
    printf("               Telefony System		   \n");
    printf("           Plan: 100 min | Base: $50	   \n");
    printf("===============================================\n\n");

    printf("Enter the amount of minutes consumed: ");
    scanf("%lf", &minutes);

    totalBill = 50;

    if (minutes > 100) {
	totalBill += (minutes - 100) * 2;
    }

    printf("\nTotal to pay: $%.2lf\n", totalBill);


    return 0;
}

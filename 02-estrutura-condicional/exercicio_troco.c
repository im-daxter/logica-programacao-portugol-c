#include <stdio.h>

int main() {

    double unitPrice, amount, receivedMoney, change, total;


    printf("\n\n======================================================================\n");
    printf("           This program will calculate the change for your            \n");
    printf("                         product purchase                             \n");
    printf("======================================================================\n\n");


    printf("Unit price of the product: ");
    scanf("%lf", &unitPrice);

    printf("Quatity purchased: ");
    scanf("%lf", &amount);

    printf("Money received: ");
    scanf("%lf", &receivedMoney);

    total = unitPrice * amount;

    if (receivedMoney >= total) {
	change = receivedMoney - total;
	printf("\nYour change: $%.2f\n", change);
    }
    else {
	change = total - receivedMoney;
	printf("\nINSUFFICIENT FUNDS! Missing: $%.2f\n", change);
    }

}

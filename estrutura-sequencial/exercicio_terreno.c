#include <stdio.h>

int main() {
    
    double width, length, area, meterValue, landPrice;

    printf("Enter the width of the land: ");
    scanf("%lf", &width);

    printf("Enter the length of the land: ");
    scanf("%lf", &length);

    printf("Enter the square meter value of the land: ");
    scanf("%lf", &meterValue);

    area = width * length;
    landPrice = meterValue * area;

    printf("Land area: %.2f\n", area);
    printf("Land value: %.2f\n", landPrice);

    return 0;
}

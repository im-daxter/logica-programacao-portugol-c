#include <stdio.h>
    /* Math library to use power and square root in the equations */
#include <math.h>

int main() {
    /* Variables to calculate the retangle*/
    double base, height, area, perimeter, diagonal;

    printf("Insert the retangle base value: ");
    scanf("%lf", &base);

    printf("Insert the height value of retangle: ");
    scanf("%lf", &height);

    area = base * height;
    perimeter = (base * 2) + (height * 2);
    diagonal = sqrt(pow(height, 2) + pow(height, 2));

    printf("Retangle area: %.2f\n", area);
    printf("Retangle perimeter: %.2f\n", perimeter);
    printf("Retangle diagonal: %.2f\n", diagonal);

    return 0;
}

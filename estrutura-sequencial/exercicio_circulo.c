#include <stdio.h>
#include <math.h>

int main() {

    double circleRadius, area;

    printf("Insert the radius of the circle: ");
    scanf("%lf", &circleRadius);

    area = M_PI * pow(circleRadius, 2);

    printf("Circle area value: %.3f\n", area);

    return 0;
}

#include <stdio.h>
#include <math.h>

/*
* Exercise: "Measurements" problem
Write a program to read three measurements, A, B, and C. Then calculate and display (print the data
to four decimal places):
a) the area of the square with side A
b) the area of the right triangle with base A and height B
c) the area of the trapezoid with bases A and B, and height C
*
*/

int main() {

    double measureA, measureB, measureC, squareArea, triagleArea, trapeziusArea;

    printf("Enter with the measure A: ");
    scanf("%lf", &measureA);

    printf("Enter with the measure B: ");
    scanf("%lf", &measureB);

    printf("Enter with the measure C: ");
    scanf("%lf", &measureC);

    squareArea = pow(measureA, 2);
    triagleArea = (measureA * measureB) / 2;
    trapeziusArea = ((measureA + measureB) * measureC) / 2;

    printf("The area of the square is: %.4f\n", squareArea);
    printf("The area of the triagle rectangle is: %.4f\n", triagleArea);
    printf("The area of the trapezius is: %.4f\n", trapeziusArea);

    

    return 0;
}

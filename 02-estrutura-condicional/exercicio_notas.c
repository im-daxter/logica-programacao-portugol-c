#include <stdio.h> 

int main() {

    double grade1, grade2, finalGrade;

    printf("What was the student's grade in the first semester: ");
    scanf("%lf", &grade1);

    printf("What was the student's grade in the second semester: ");
    scanf("%lf", &grade2);

    finalGrade = (grade1 + grade2) / 2;
    printf("Final Grade: %.1f\n", finalGrade);

    if ( finalGrade < 60 ) {
	printf("FAILED!\n");
    }
    else {
	printf("APPROVED!\n");
    }

    return 0;
}

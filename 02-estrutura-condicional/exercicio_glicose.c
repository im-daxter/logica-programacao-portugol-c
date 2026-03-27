#include <stdio.h>

int main() {
    
    double glucoseLevel;

    printf("\n\n===================================================================\n");
    printf("  This program will show the classification of your glucose level  \n");
    printf("                        Normal <= 100 mg/dl                        \n"); 
    printf("          High: 100 to 140 mg/dl      Diabetes > 140 mg/dl         \n");
    printf("===================================================================\n\n");

    printf("Enter with your glucose measurement: ");
    scanf("%lf", &glucoseLevel);

    printf("Your glucose level: %.2lf mg/dl\n\n", glucoseLevel);


    if ( glucoseLevel <= 100 ) {
	printf("Classification: Normal\n");
    }
    else if ( glucoseLevel <= 140 ) {
	printf("Classification: High\n");
    }
    else {
	printf("Classification: Diabetes\n");
    }

}

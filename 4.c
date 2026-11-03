//Askisi 4
#include <stdio.h>

int main() {
	double d;
	float f;

    printf("Enter a value: ");
	scanf("%lf", &d);

	f = (float)d;

	printf("d = %.10f\n", d);
	printf("f = %.10f\n", f);

	return 0;
}

/* paratiro pos h metatropi apo double se float prokalei apoleia akribias 

    Enter a value: 1.123
    d = 1.1230000000
    f = 1.1230000257

    Enter a value: 1.123456789123
    d = 1.1234567891
    f = 1.1234568357

*/
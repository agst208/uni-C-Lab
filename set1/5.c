//Askisi 5
#include <stdio.h>

int main() {
	int x, sum;
    
    // Ζητάμε ξανά αριθμό μέχρι να είναι θετικός και τριψήφιος.
    do {
        printf("Enter a 3-digit number: ");
        scanf("%d", &x);
        if (x <= 99 || x >= 1000) {
            printf("Number needs to be 3-digit and positive\n");
        }
    } while (x <= 99 || x >= 1000);

    // Προσθέτουμε τα ψηφία των εκατοντάδων, δεκάδων και μονάδων.
    sum = x/100 + (x/10)%10 + x%10;
    printf("%d\n", sum);

	return 0;

}

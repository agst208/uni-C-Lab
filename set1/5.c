#include <stdio.h>

int main() {
	int x, sum;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &x);
    if (x > 99 && x<1000) {
        sum = x/100 + (x/10)%10 + x%10;
        printf("%d\n", sum);
    }
    else {
        printf("Number needs to be 3-digit and positive\n");
    }

	return 0;

}

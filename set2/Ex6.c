#include <stdio.h>

int main() {
	int n; //plithos arithmwn
	int value;
	int previous;
	int runLength = 0;
	int longestRun = 0;
	int ans;

    do {
	    printf("Enter the number of values: ");
	    scanf("%d", &n);
        if (n <= 1) {
	    	printf("Invalid number\n");
        }
    } while (n <= 1);

	printf("Enter numbers: \n");
	for (int i = 0; i < n; i++) {
		printf("Number %d: ", i + 1);
        scanf("%d", &value);
 
		if (i == 0 || value != previous) {
			runLength = 1;
		} 
        else {
			runLength++;
		}
		previous = value;

		if (runLength > longestRun) {
			longestRun = runLength;
			ans = value;
		}
	}

	printf("The value and its repetitions are: %d and %d\n", ans, longestRun);
	return 0;
}

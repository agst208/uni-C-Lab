 //2o set askisi 2.1
#include<stdio.h>

// check an enas arithmos iparxei pio prin ston pinaka
int check_past(int num, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int numbers[30]; // Pinakas gia tous 30 arithmous
    int times[21] = {0}; // pinakas gia tis foreas ana arithmo (0-20)
    int max_times = 0; // megistos arithmos epanalipseon


    // eisagogh 30 arithmon apo ton xristi
    for (int i = 0; i < 30; i++) {
        do {
            printf("Enter number %d (0-20): ", i + 1);
            scanf("%d", &numbers[i]);
            if (numbers[i] < 0 || numbers[i] > 20) {
                printf("Please enter a number between 0 and 20.\n");
            }
        } while (numbers[i] < 0 || numbers[i] > 20);
    }

    // metrhsh twn forewn ana arithmo
    for (int j = 0; j <30; j++) {
        if (check_past(numbers[j], numbers, 30)) {
            times[numbers[j]]++;
        }
    }

    // emfanisi epanalipseon ana arithmo kai anazitisi tou megistou arithmou epanalipsewn
    for (int k = 0; k <= 20; k++) {
        if (times[k] > 0) {
            printf("Number %d appears %d times.\n", k, times[k]);
        }
        if (times[k] > max_times) {
            max_times = times[k];
        }
    }

    // emfanisi twn pio syxnon arithmon
    printf("Most frequent number(s), appearing %d times:\n", max_times);
    for (int k = 0; k <= 20; k++) {
        if (times[k] == max_times) {
            printf("%d\t", k);
        }
    }

    return 0;
}

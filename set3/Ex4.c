// 3o set askisi 4
#include <stdio.h>

// Synartisi pou ektiponei ton pinaka
int print_matrix(int matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int main() {

    int a[3][3] = {0}; // arxikos pinakas 

    // Eisagwgh timwn ston pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Dose arithmo gia ton pinaka a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    print_matrix(a);

    int num_0 = 0; // metvaliti gia ton arithmo twn mhdenikwn stoixeion tou pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 0) {         
                num_0++;
            }
        }
    }

    // pososto % twn mhdenikwn stoixeion tou pinaka a
    float percentage_0 = (float)num_0 / 9 * 100;
    printf("Pososto mhdenikwn stoixeion: %f %\n", percentage_0);

    // chack an einai areos
    if (percentage_0 > 80) {
        printf("O pinakas a einai areos.\n");
    }
    else {
        printf("O pinakas a den einai areos.\n");
    }

    return 0;
}
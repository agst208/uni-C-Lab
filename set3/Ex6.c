// 3o set askisi 6
#include <stdio.h>
#include <stdlib.h>

// Synartisi pou ektiponei ton pinaka
int print_matrix(int **matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int main() {

    int n ,m;

    // Eisagwgh tou megethous tou pinaka
    do {
        printf("Dose ton arithmo twn grammwn tou pinaka >2: ");
        scanf("%d", &n);
    } while (n <= 2);

    do {
        printf("Dose ton arithmo twn sthlwn tou pinaka >2: ");
        scanf("%d", &m);
    } while (m <= 2);

    int **a; // pinakas 
    a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(m * sizeof(int));
    }

    // Eisagwgh timwn ston pinaka a
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Dose arithmo gia ton pinaka a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Ektipwsh tou pinaka
    print_matrix(a, n, m);

    // megisto 2x2
    int athroisma = 0;
    int max_athroisma = 0;
    int max_i = 0;
    int max_j = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            athroisma = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
            if (athroisma > max_athroisma) {
                max_athroisma = athroisma;
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("To megisto athroisma 2x2 einai: %d\n", max_athroisma);
    printf("Oi syntetagmenes tou panw aristera stoixeiou einai: (%d, %d)\n", max_i, max_j);

    // apodesmeusi mnhmhs
    for (int i = 0; i < n; i++) {
        free(a[i]);             
    }
    free(a);

    return 0;

}
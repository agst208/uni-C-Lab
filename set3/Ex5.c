// 3o set askisi 5
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
        printf("Dose ton arithmo twn grammwn tou pinaka: ");
        scanf("%d", &n);
    } while (n <= 0);

    do {
        printf("Dose ton arithmo twn sthlwn tou pinaka: ");
        scanf("%d", &m);
    } while (m <= 0);

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

    // metatopisi stoixeion kyklika pros ta kato
    for (int i = 0; i < n; i++) {
        int end = a[n-1][i]; // apothikeusi tou teleutaiou stoixeiou
        for (int j = m - 1; j > 0; j--) {
            a[j][i] = a[j-1][i];
        }
        a[0][i] = end;
    }

    // Ektipwsh tou pinaka meta thn metatopisi
    print_matrix(a, n, m);

    // Apodesmeusi mnhmhs
    for (int i = 0; i < n; i++) {
        free(a[i]);             
    }
    free(a);
    return 0;

}

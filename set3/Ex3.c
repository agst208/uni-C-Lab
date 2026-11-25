// 3o set askisi 3
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

    // elaxisto pinaka 
    int min = a[0][0];
    int min_x = 0, min_y = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                min_x = i;
                min_y = j;
            }
        }
    }
    printf("To elaxisto stoixeiou tou pinaka einai: [%d, %d] = %d\n", min_x, min_y, min);

    // stili gia elahisto
    int stili;
    do {
        printf("Dose ton arithmo tis stilis (0-%d): ", m - 1);
        scanf("%d", &stili);
    } while (stili < 0 || stili >= m);

    // elahiato stoixeio tis stilis
    int min_col = a[0][stili];
    int min_col_row = 0;
    for (int i = 0; i < n; i++) {
        if (a[i][stili] < min_col) {
            min_col = a[i][stili];
            min_col_row = i;
        }   
    }

    printf("To elaxisto stoixeiou tis stilis [%d] einai: [%d, %d] = %d\n", stili, min_col_row, stili, min_col);

    // grammh gia megisto
    int grammh;
    do {
        printf("Dose ton arithmo tis grammis (0-%d): ", n - 1);
        scanf("%d", &grammh);           
    } while (grammh < 0 || grammh >= n);

    // megisto stoixeio tis grammis
    int max_row = a[grammh][0];
    int max_row_col = 0;
    for (int j = 0; j < m; j++) {
        if (a[grammh][j] > max_row) {
            max_row = a[grammh][j];
            max_row_col = j;
        }
    }
    printf("To megisto stoixeiou tis grammis [%d] einai: [%d, %d] = %d\n", grammh, grammh, max_row_col, max_row);

    // Apodesmeysi mnimis
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
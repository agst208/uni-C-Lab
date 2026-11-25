// 3o set askisi 7
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

// Synartisi pou ypologizei to athroisma mias grammhs tou pinaka
int athroisma_grammhs(int **matrix, int n, int m, int row) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += matrix[row][j];
    }
    return sum;
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

    int **sums; // neos pinakas pou krataei ta athroismata tvn gramon 
    sums = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        sums[i] = (int *)malloc(2*sizeof(int));
    }

    // ektiposi athroismaton
    for (int i = 0; i < n; i++) {
        int sum = athroisma_grammhs(a, n, m, i);
        sums[i][0] = i; // apothikeusi tou arithmou tis grammhs
        sums[i][1] = sum; // apothikeusi tou athroismatos
        printf("To athroisma tis grammhs %d einai: %d\n", i, sum);
    }

    // taksinomisi tou pinaka sums me vasi to athroisma tis grammhs

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sums[j][1] > sums[j + 1][1]) {
                int temp_row = sums[j][0];
                int temp_sum = sums[j][1];
                sums[j][0] = sums[j + 1][0];
                sums[j][1] = sums[j + 1][1];
                sums[j + 1][0] = temp_row;
                sums[j + 1][1] = temp_sum;
            }
        }
    }
    

    // taksinomisi grammon auksousa seira ston neo pinaka b simphona me ton taksinmimeno sums
    int **b = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        b[i] = (int *)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            b[i][j] = a[sums[i][0]][j];
        }
    }

    // ektiposi tou taksinomimenou pinaka
    printf("\nO taksinomimenos pinakas einai:\n");
    print_matrix(b, n, m);


    // Apodesmeusi mnhmhs
    for (int i = 0; i < n; i++) {
        free(a[i]);
        free(sums[i]);
        free(b[i]);
    }
    free(a);
    free(sums);
    free(b);
    return 0;

}

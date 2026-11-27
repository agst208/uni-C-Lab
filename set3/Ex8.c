// 3o set askisi 8
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

// synartisi gia na vriskei to telos
int check_end(int n, int m, int x, int y) {
    if (x+1>m-1 && y+1>n-1) return 0;
    else return 1;
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

    int x = 0, y = 0; // metablites kinisis
    int d = 0, r = 0; // metablites gia thn kato kai dexia timh
    int sum = a[0][0]; // metabliti gia to sum tou monopatiou

    while (check_end(n,m,x,y)) {
        d = a[x][y+1];
        r = a[x+1][y];
        // kinisi
        if (x+1>m-1) y++; // an ftasoume sto deksi terma pame kato
        else if (y+1>n-1) x++; // an ftasoume sto kato terma pame deksia
        else {
            if (d>r) y++;
            else x++; // and oi times einai ises pame deksia
        }
        sum += a[x][y];
    }

    printf("\n\n sum: %d \n", sum);


    //Apodesmeusi mnhmhs
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}
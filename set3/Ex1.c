// 3o set askisi 1
#include <stdio.h>

int main() {

    int a[5][5] = {0}; // 1os pinakas 
    int b[4][4] = {0}; // 2os pinakas xoris thn x gramh kai styili
    int x;

    // Eisagwgh timwn ston pinaka a
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Dose arithmo gia ton pinaka a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // ektiposi tou pinaka a
    printf("O pinakas a einai:\n\n");
    for (int k = 0; k < 5; k++ ) {
        for (int d = 0; d < 5; d++ ) {
            printf("%d ", a[k][d]);
        }
        printf("\n");
    }

    // Eisagwgh arithmou x apo ton xrhsth
    do{
        printf("Dose arithmo x: ");
        scanf("%d", &x);
        if (x < 0 || x > 5) {
            printf("Dose arithmo metaksi 0 kai 5.\n");
        }
    } while (x < 0 || x > 5);

    // Antigrafh timwn apo ton pinaka a ston pinaka b xwris thn x gramh kai styili
    int x_a = 0; // metritis gia thn grammh tou pinaka a
    int y_a = 0; // metritis gia thn styili tou pinaka a
    for (int x_b = 0; x_b < 4; x_b++) {
        if (x_b == x) x_a++; // pername thn grammh x tou pinaka a
        for (int y_b = 0; y_b < 4; y_b++) {
            if (y_b == x) y_a++; // pername thn styili x tou pinaka a
            b[x_b][y_b] = a[x_a][y_a];
            y_a++;
        }
        y_a = 0;
        x_a++;
    }

    // ektiposi tou pinaka b
    printf("O pinakas xoris thn grammh %d kai thn styili %d einai:\n\n", x,x);
    for (int f = 0; f < 4; f++ ) {
        for (int g = 0; g < 4; g++ ) {
            printf("%d ", b[f][g]);
        }
        printf("\n");
    }

    return 0;



}
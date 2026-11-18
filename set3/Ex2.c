// 3o set askisi 2
#include <stdio.h>

int main() {

    int a[3][3] = {0}; // arxikos pinakas 

    // Eisagwgh timwn ston pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Dose arithmo gia ton pinaka a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // diagonios
    int diag_sum = 0; // metvaliti gia to athropisma ton stoixeion ths diagonioy
    int diag_a[3][3] = {0}; // pinakas gia th diagonio tou pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                diag_a[i][j] = a[i][j];
                diag_sum += a[i][j];
            }
            else diag_a[i][j] = 0;
            
        }
    }


    // ektiposi tou diagoniou
    printf("Diagonios:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", diag_a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Athropisma diagonioy: %d\n\n", diag_sum);

    // ano trigono
    int upper_tri_sum = 0; // metvaliti gia to athropisma ton stoixeion tou ano trigononikou mitroou
    int upper_tri[3][3] = {0}; // pinakas gia thn ano trigononiko mitroo tou pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                upper_tri[i][j] = a[i][j];
                upper_tri_sum += a[i][j];
            }
            else upper_tri[i][j] = 0;
        }
    }

    // ektiposi tou ano trigononikou
    printf("Ano trigononiko mitroo:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", upper_tri[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Athropisma ano trigononikou: %d\n\n", upper_tri_sum);

    
    // kato trigono
    int lower_tri_sum = 0; // metvaliti gia to athropisma ton stoixeion tou kato trigononikou mitroou
    int lower_tri[3][3] = {0}; // pinakas gia thn kato trigononiko mitroo tou pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= j) {
                lower_tri[i][j] = a[i][j];
                lower_tri_sum += a[i][j];
            }
            else lower_tri[i][j] = 0;
        }
    }

    // ektiposi tou kato trigononikou
    printf("Kato trigononiko mitroo:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", lower_tri[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Athropisma kato trigononikou: %d\n\n", lower_tri_sum);

    // transpose
    int transpose_sum = 0; // metvaliti gia to athropisma ton stoixeion tou transpose
    int transpose_a[3][3] = {0}; // pinakas gia thn transpose tou pinaka a
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose_a[i][j] = a[j][i];
            transpose_sum += transpose_a[i][j];
        }
    }

    // ektiposi ths transpose
    printf("Transpose:\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", transpose_a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Athropisma transpose: %d\n\n", transpose_sum);

    return 0;
}
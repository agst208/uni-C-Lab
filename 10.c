//Askisi 10
#include <stdio.h>

int main() {

    int n, ek, dek, mon, y;

    // Zhtame arithmo mexri na einai tripsifios
    do {
        printf("Enter a 3 digit number: ");
        scanf("%d", &n);
        if (n < 100 || n > 999) {
            printf("Number needs to be 3 digits.\n");
        }
    } while (n < 100 || n > 999);

    // apomononoume ta psifia
    ek = n/100 ;
    dek = n/10 - ek*10 ;
    mon = n - ek*100 -dek*10 ;
    // ta antistrefoume kai prosthetoume 111 gia na aujhthoun ola kata 1 kai emfanizoume
    y = ek + dek*10 +mon*100+111;
    printf("Modified number is: %d\n", y) ;

    return 0;
}   
#include <stdio.h>

int main() {

    int n, ek, dek, mon, y;

    do {
        printf("Enter a 3 digit number: ");
        scanf("%d", &n);
        if (n < 100 || n > 999) {
            printf("Number needs to be 3 digits.\n");
        }
    } while (n < 100 || n > 999);

    ek = n/100 ;
    dek = n/10 - ek*10 ;
    mon = n - ek*100 -dek*10 ;
    y = ek + dek*10 +mon*100+111;
    printf("Modified number is: %d\n", y) ;

    return 0;
}   
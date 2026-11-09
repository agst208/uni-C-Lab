//2o set askisi 11
#include<stdio.h>

int main() {
    int n, athroisma=0;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n<0) {
            printf("Number needs to be positive.\n");
        }
    }
    while (n<0);

    printf("Oi %d protoi fisikoi arithmoi einai: ", n);
    for (int i=0; i<=n; i++) {
        printf("%d ", i);
        athroisma += i;

    }

    printf("\n");
    printf("To athroisma tous  einai: %d\n", athroisma);

    printf("H mesi timi tous einai: %d\n", athroisma/n);

    printf("Nea akolouthia ^2: ");
    for (int i=0; i<=n; i++) {
        printf("%d ", i*i);
    }
    
    return 0;
}
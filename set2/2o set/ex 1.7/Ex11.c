//2o set askisi 11
#include<stdio.h>

int check_prime(int num);

int main() {
    int n, athroisma=0, r=0;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n<0) {
            printf("Number needs to be positive.\n");
        }
    }
    while (n<0);

    printf("Oi %d prime fisikoi arithmoi einai:\t", n);
    for (int i=0; i<=n; i++) {
        if (check_prime(i)) {
            printf("%d\t", i);
            athroisma += i;
            r ++;
        }

    }

    printf("\n");
    printf("To athroisma tous  einai: %d\n", athroisma);

    printf("H mesi timi tous einai: %d\n", athroisma/n);

    printf("Nea akolouthia ^2:\t");
    for (int i=0; i<=n; i++) {
        if (check_prime(i)) {
            printf("%d\t", i*i);
        }
    }
    
    return 0;
}

int check_prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
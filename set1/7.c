//Askisi 7
#include <stdio.h>

int main() {

    int n;
    double res;

    res = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Πολλαπλασιάζουμε επανειλημμένα (n φορες) επί 2 για να υπολογίσουμε το 2^n.
    for (int i = 1; i <= n-1; i++) {
        res *= 2;
    }

    printf("2^%d = %.1lf ", n, res);

    return 0;
}
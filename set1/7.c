#include <stdio.h>

int main() {

    int n;
    double res;

    res = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++) {
        res *= 2;
    }

    printf("2^%d = %.1lf ", n, res);

    return 0;
}
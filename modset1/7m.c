#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[1];
    int n;
    double res = 1.0;
    long long i;

    if (!read_ints("Enter a number: ", values, 1)) {
        return 0;
    }
    n = values[0];

    if (n >= 0) {
        for (i = 0; i < n; ++i) {
            res *= 2.0;
        }
    } else {
        for (i = 0; i > n; --i) {
            res /= 2.0;
        }
    }

    printf("2^%d = %.10g\n", n, res);
    return 0;
}

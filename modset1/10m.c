#include <stdio.h>
#include "input.h"

int main(void)
{
    int values[1];
    int n, ek, dek, mon, y;

    for (;;) {
        if (!read_ints("Enter a 3 digit number: ", values, 1)) {
            return 0;
        }
        n = values[0];
        if (n >= 100 && n <= 999) {
            break;
        }
        puts("Number needs to be 3 digits.");
    }

    ek = n / 100;
    dek = n / 10 - ek * 10;
    mon = n - ek * 100 - dek * 10;
    y = ek + dek * 10 + mon * 100 + 111;
    printf("Modified number is: %d\n", y);

    return 0;
}

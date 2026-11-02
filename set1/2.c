#include <stdio.h>

int main() {
    float x,y;
    int z;
    do {
        printf("Enter 2 values: ");
        scanf("%f%f", &x, &y);
        if (x <= 0 || y <= 0) {
        printf("Values need to be >0\n");
        }
    } while (x <= 0 || y <= 0);

    z = x/y;
    printf("%d %f\n", z, x-(z*y));

    return 0;
}
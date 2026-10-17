#include <stdio.h>

int main() {
    float x,y;
    int z;
    printf("Enter 2 values: ");
    scanf("%f%f", &x, &y);
    z = x/y;
    printf("%d %f\n", z, x-(z*y));

    return 0;

}
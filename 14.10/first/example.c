#include <stdio.h>

int main() {

    int x,y;
    printf("Give values: ");
    scanf("%d%d", &x, &y);
    printf("The sum is: %d\n", x*y^2);

    if (x == 9) {
        printf("x IS 9");
        }
    else {
    printf("x IS NOT 9");
    };

    return 0;

}

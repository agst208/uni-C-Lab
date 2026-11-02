#include <stdio.h>

int main() {

    double a,b;
    
    do {
        printf("Eter two numbers: ");
        scanf("%lf%lf", &a, &b);
        if (b <= 0 || a < 0) {
            printf("Second number needs to >0 and the first >=0\n");
        }
    } while (b <= 0 || a < 0);

    int q = (int)(a / b);
    float r = a - b * q;

    printf("Ypoloipo: %f \n", r);


    return 0;
}   
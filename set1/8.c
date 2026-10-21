#include <stdio.h>

int main() {

    double a,b;
    
    printf("Eter two numbers: ");
    scanf("%lf%lf", &a, &b);
    if (b > 0 && a >= 0) {

        int q = (int)(a / b);

        float r = a - b * q;

        printf("Ypoloipo: %f \n", r);


    }
    else printf("Second number needs to be !=0 and both need to be positive \n"); 


    return 0;
}   
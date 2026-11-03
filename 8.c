//Askisi 8
#include <stdio.h>

int main() {

    double a,b;
    
    // diabazoume 2 arithmous mexri a >= 0 kai b > 0
    do {
        printf("Enter two numbers: ");
        scanf("%lf%lf", &a, &b);
        if (b <= 0 || a < 0) {
            printf("Second number needs to >0 and the first >=0\n");
        }
    } while (b <= 0 || a < 0);

    // ypologizoume to akaireo pyliko kai apo auto to ypoloipo
    int q = (int)(a / b);
    float r = a - b * q;

    printf("Ypoloipo: %f \n", r);


    return 0;
}   
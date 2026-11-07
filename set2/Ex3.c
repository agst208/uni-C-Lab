//2o set askisi 3
#include<stdio.h>

int main() {
    int plith;
    float rithm, n;
    n=0.0;
    do {
        printf("Plithismos kai rithmos auksisis (atoma/xrono): ");
        scanf("%d%f", &plith, &rithm);
    }
    while (plith<0 || rithm<0);

    n = plith/rithm;
    printf("%f xronia mexri diplasiasmo\n", n);
    
    return 0;
}
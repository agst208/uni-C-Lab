//2o set askisi 2
#include<stdio.h>

int main() {
    int n, d, i;
    n = 48;
    d = 0;
    do {
        for (i=1; i<=10; i++){
            d = n-48;
            printf("%d(%d)\t", d, n);
            n++;
        }
        printf("\n");
    }
    while (n<126);
    
    return 0;
}
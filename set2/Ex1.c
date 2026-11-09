//2o set askisi 1
#include<stdio.h>

int main() {
    int n = 1, i, r;
    for(i=1; i<=10; i++){
        for (r=1; r<=10; r++){
            printf("%d \t", n);
            n++;
        }
        printf("\n");
    }
    return 0;

}
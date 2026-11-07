//2o set askisi 4
#include<stdio.h>

int main() {
    int n,i,res;
    do {
        printf("Enter a number >0 and <10: ");
        scanf("%d",&n);
    }
    while (n<0 || n>10);

    for (i=1; i<n; i++) {
        res += (3*n)*(3*n);
    }

    printf("Total: %d\n", res);
    
    return 0;
}
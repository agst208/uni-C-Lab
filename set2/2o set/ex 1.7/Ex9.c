//2o set askisi 9
#include<stdio.h>

int main() {
    int n; // plithos stoixeion
    int n1 = 0, n2 = 1; // F(n-1), F(n-2)
    int next; // F(n)

    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n<0) {
            printf("Number needs to be positive.\n");
        }
    }
    while (n<0);

    if (n>20) {n = 20;}
    
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d\t", n1);
        } 
        else if (i == 2) {
            printf("%d\t", n2);
        } 
        else {
            // upologismos tou epomenou stoixeiou tis seiras
            next = n1 + n2;
            n1 = n2;
            n2 = next;
            printf("%d\t", next);
        }
        
        // allagi grammis ana 5 stoixeia
        if (i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;

}
    
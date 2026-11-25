//2o set askisi 5
#include<stdio.h>

int main() {
    int n,i,r ;

    printf("enter a number: ");
    scanf("%d", &n);

    for ( i = 2; i < n; i++)
    {
        if ((n%i) == 0) {r++;}
    }

    if (r == 0) {printf("Protos arithmos\n");}
    else {printf("%d arithmoi ton dieroun akribos\n",r);}
    
    return 0;
}
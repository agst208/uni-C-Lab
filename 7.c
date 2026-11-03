//Askisi 7
#include <stdio.h>

int main() {

    int n;
    double res, nres;

    res = 2;
    nres = 2;

    //zhtame enan arithmo
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n>0){
        // an n>0 polaplasiazoume n fores to 2 me ton eayto tou
        for (int i = 1; i <= n-1; i++) {
            res *= 2;
        }
    }
    else if (n == 0){ res = 1;} // an n=0, einai 1 giati 2^0=1
    else {
        // an n<0, polaplasiazoume -n fores to 2 me ton eauto tou kai antistrefoume 2^-n = 1/(2^n)
        for (int i = 1; i <= (-n)-1; i++) {
            nres *= 2;
        }     
        res = 1/nres;
    }

    printf("2^%d = %lf", n, res);

    return 0;
}
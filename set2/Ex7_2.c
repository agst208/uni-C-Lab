//2o set askisi 7_2
#include<stdio.h>

int main() {
    int n,i,r, s, res, prosimo ;
    r = 1;
    res = 0;
    prosimo = 0; // an 0 --> + an 1 --> -

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n>=0) {
        for ( s = 1; s <= n; s++) {
            r = 1;
            for ( i = 2; i <= s; i++)
            {
               r += i;
            }
            if (prosimo == 0){
                res += r;
                prosimo = 1;
            }
            else {
                res -= r;
                prosimo = 0;
            }
        
        }
    }
    else {
        for ( s = 1; s <= -n; s++) {
            r = 1;
            for ( i = 2; i <= s; i++)
            {
               r -= i;
            }
            if (prosimo == 0){
                res += r;
                prosimo = 1;
            }
            else {
                res -= r;
                prosimo = 0;
            }
        
        }  
    }
    
    printf("Output: %d\n", res);
    
    return 0;
}
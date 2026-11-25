//2o set askisi 7_1
#include<stdio.h>

int main() {
    int n,i,r, s, res ;
    r = 1;
    res = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n>=0) {
        for ( s = 1; s <= n; s++) {
            r = 1;
            for ( i = 2; i <= s; i++)
            {
               r += i;
            }
            res += r;
        }
    }
    else {
        for ( s = 1; s <= -n; s++) {
            r = 1;
            for ( i = 2; i <= s; i++) {
                r -= i;
            }
            res += r;
        }
    }
    
    printf("Output: %d\n", res);
    
    return 0;
}
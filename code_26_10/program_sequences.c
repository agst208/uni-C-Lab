#include <stdio.h>

int main()
{
    int n, i, k, S1,S2,S3,S4;

    do
    {
        printf("Dose timh >=1: ");
        scanf("%d", &n);
    }
    while (n<1);

    do
    {
        printf("Dose timh >=1: ");
        scanf("%d", &k);
    }
    while (k<1);

    S1=0;
    for (i=1; i<=n; i++)
    {
        S1=S1+i;
    }


    S2=0;
    for (i=1; i<=n; i++)
    {
        /* compute term=i^k */
        int term=1;
        int j;
        for (j=1; j<=k; j++) term=term*i;


        S2=S2+term;
    }

    S3=0;
    for (i=1; i<=n; i++)
    {
        /* compute term=i^i */
        int term=1;
        int j;
        for (j=1; j<=i; j++) term=term*i; //term=f(i)


        S3=S3+term;// S3=S3+f(i)
    }

        S4=0;
    for (i=1; i<=n; i++)
    {
        /* compute term=i!=1*2*3..*i */
        int term=1;
        int j;
        for (j=1; j<=i; j++) term=term*j; //term=f(i)


        S4=S4+term;// S4=S4+f(i)
    }

    printf("The results are %d %d %d %d\n", S1,S2,S3,S4);


    int factorial=1;
    S4=0;
    for (i=1; i<=n; i++)
    {
        /* compute term=i!=1*2*3..*i */

        factorial=factorial*i;
        S4=S4+factorial;// S4=S4+f(i)
    }

    printf("The extra results is %d \n", S4);

    return 0;


}

#include <stdio.h>
/* Un programme qui demande un nombre positif non nul de départ, et qui calcule sa factorielle.*/

int main()
{
    int N, SUM;
    SUM = 1;
    printf("entre un nombre ");
    scanf("%d", &N);

    if (N > 0)
    {
        for (int i = 1; i <= N; i++)
        {
            SUM *= i;
        }
        printf("la sum = %d ", SUM);
    }

    else if (N == 0)
    {
        for (int i = 1; i <= N; i++)
        {
            SUM *= i;
        }
        printf("la sum =%d", SUM);
    }
    else
        printf("entre un nombre positive ");
}
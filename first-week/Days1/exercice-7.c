#include <stdio.h>
#include <math.h>

int main()
{
    int N, X, puissance;

    printf("entrer un nombre ");
    scanf("%d", &N);

    printf("entrer la  puissance");
    scanf("%d", &X);

    puissance = pow(N,X);
    printf("la resolta = %d ", puissance);
}


 
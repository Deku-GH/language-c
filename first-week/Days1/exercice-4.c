#include <stdio.h>

int main()
{
    int N, I, J;

    printf("entrer un nombre : ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
    {
        printf("\n");
        for (J = 1; J <= I; J++)
            printf("%d", I);
    }
}
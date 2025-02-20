#include <stdio.h>
int somme(int T[])
{
    int some = 0;
    for (int i = 0; i < 10; i++)
    {
        some = some + T[i];
    }

    return (some);
}

void produie(int T[])
{
    int pr = 1;
    for (int i = 0; i < 10; i++)
    {
        pr *= T[i];
    }

    printf("la produit est :%d \n ", pr);
}

void la_myanin(int T[])
{
    int S;

    S = somme(T);
    S = S / 10;
    printf("la myanne est :%d \n", S);
}

int main()
{

    int T[10], some;
    int i = 0;

    while (i < 10)
    {
        printf("entrez la nambre %d : ", i + 1);
        scanf("%d", &T[i]);
        i++;
    }
    some = somme(T);
    printf("la sommme est :%d \n ", some);
    produie(T);
    la_myanin(T);
}
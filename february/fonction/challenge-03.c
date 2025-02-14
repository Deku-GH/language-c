#include <stdio.h>

/*Un programme utilisant une fonction qui affiche le tableau de multiplication d’un entier positif x*/
void multi(int x)
{
    int i = 0;

    while (i <= 10)
    {
        printf(" %d * %d= %d\n ", x, i, i * x);
        i++;
    }
}

int main()
{
    int x;
    printf("entrez la nombre : ");
    scanf("%d", &x);

    multi(x);
}
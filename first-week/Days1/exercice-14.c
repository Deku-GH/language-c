#include <stdio.h>

int main()
{
    int i, nombre, la_somme;
    la_somme = 0;
    for (i = 1; i <= 8; i++)
    {
        printf("entrez n%d : ", i);
        scanf("%d", &nombre);

        if (nombre < 0)
            continue;

        la_somme += nombre;
    }

    printf("la somme est : %d", la_somme);
}
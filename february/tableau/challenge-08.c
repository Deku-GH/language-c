#include <stdio.h>

int main()
{
    int T[100], taille, i;
    int tmp = 0;

    printf("entrez la taille de tableau :");
    scanf("%d", &taille);
    for (i = 0; i < taille; i++)
    {
        printf("T[%d] = \n", i + 1);
        scanf("%d", &T[i]);
    }
    for (i = 0; i < taille; i++)
    {
        for (int j = i + 1; j <= taille - 1; j++)
        {
            if (T[i] > T[j])
            {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }

    for (i = 0; i < taille; i++)
    {
        printf("%d ", T[i]);
    }
}
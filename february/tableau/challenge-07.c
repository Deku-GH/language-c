#include <stdio.h>

int main()
{
    /*فاصل الإعداد الزوجية وغير الزوجية.*/
    int T[100], P[100], I[100];
    int taille, count1, count2, i;

    printf("Entrez la taille de tableau : ");
    scanf("%d", &taille);

    for (i = 0; i < taille; i++)
    {
        printf("T[%d] =\n ", i + 1);
        scanf("%d ", &T[i]);
    }
    count1 = 0;
    count2 = 0;
    for (i = 0; i < taille; i++)
    {
        if (T[i] % 2 == 0)
        {
            P[i] = T[i];
            count1++;
        }
        else
        {

            I[i] = T[i];
            count2++;
        }
    }
    printf("Les nombre pair\n");
    for (i = 0; i < count1; i++)
    {
        printf(" %d", P[i]);
    }
    printf("\nLes nombre inpair\n");
    for (i = 0; i < count2; i++)
    {
        printf(" %d-", I[i]);
    }
}
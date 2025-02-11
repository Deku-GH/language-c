#include <stdio.h>
/*تمارين مسح موضع مع وإعادة ترتيب المصفوفة.*/
int main()
{

    int T[100], taille, position;

    printf("entre la taille de la tableau : ");
    scanf("%d", &taille);
    for (int i = 0; i < taille; i++)
    {
        printf("donne la nombre %d : ", i + 1);
        scanf("%d", &T[i]);
    }
    for (int i = 0; i < taille; i++)
    {
        printf("T[%d]= %d \n", i + 1, T[i]);
    }

    printf("quil position de suprime : ");
    scanf("%d", &position);
    if (position > 0 && position <= taille)
    {
        for (int i = position - 1; i < taille; i++)
        {
            T[i] = T[i + 1];
        }
        for (int i = 0; i < taille - 1; i++)
        {
            printf("T[%d]= %d \n", i + 1, T[i]);
        }
    }
    else
        printf("entre laa position enter 1 et %d", taille);
}
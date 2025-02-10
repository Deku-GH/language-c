#include <stdio.h>

int main()
{
    int T[10], taille, N, pos;

    printf("quil la taille de tableau : \n ");
    scanf("%d", &taille);

    for (int i = 0; i < taille; i++)
    {
        printf("entre la nombre %d :\n", i + 1);
        scanf("%d", &T[i]);
    }

    printf("quil position : ");
    scanf("%d", &pos);
    if (pos <= taille+1)
    {
        printf("le nombre : ");
        scanf("%d", &N);
       
        for (int i = taille+1; i >= pos; i--)
        {
            T[i] =T[i-1];
            
       
        }
        T[pos-1]=N;
        for (int i = 0; i <= taille; i++)
        {
            printf("T[%d]= %d \n", i + 1, T[i]);
        }
    }
    else
        printf("n'est pas valide ");
}
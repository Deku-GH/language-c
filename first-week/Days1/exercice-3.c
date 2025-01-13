#include <stdio.h>

int main()
{

    int N, i;

    printf("veuillez entrer un nombre ");
    scanf("%d", &N);

    i = 0;
    while (0 < N < 10 && i <= 10)
    {

        printf(" %d * %d = %d \n ", N, i, i * N);
        i++;
    }

    // exmple 2

    // printf("veuillez entrer un nombre ");
    // scanf("%d", &N);

    // if (0 < N && N < 10)
    // {
    //     i = 0;
    //     while (i <= 10)
    //     {

    //         printf(" %d * %d = %d \n ", N, i, i * N);
    //         i++;
    //     }
    // }

    // else
    //     printf("essayez d'écrire un nombre entre 1 et 10 ");

}

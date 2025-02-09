#include <stdio.h>

int main()
{
    float T[10], somme;
    somme = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("donne la note num %d = ", i + 1);
        scanf("%f", &T[i]);
        somme += T[i];
    }

    printf("la moyenne des notes est : %.2f ", somme / 10);
}
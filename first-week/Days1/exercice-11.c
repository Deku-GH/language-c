
#include <stdio.h>

int main()
{
    int N[100], i, m, count, s;
    count = 0;
    printf("entrer la nombre de la nombre = ");
    scanf("%d", &m);

    i = 0;
    while (i < m)
    {
        printf("la nombre %d = ", i);
        scanf("%d",&N[i]);
        i++;
        count++;
    }
    for (int j = 0; j < m; j++)
        printf("la nombre %d = %d \n", j, N[j]);

    printf("\n qui nombre qui suprime : ");
    scanf("%d", &s);

    for (int k = s; k < m; k++)
    {

      N[k]=N[k+1];
    }
    for (int b = 0; b < count-1 ; b++)
        printf("%d\n", N[b]);
}
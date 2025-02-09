#include <stdio.h>

int main()
{
    int k, i, count, M, s;
    count = 0;
    printf("entrer une nombre array : ");
    scanf("%d", &k);
    int N[k];

    for (i = 0; i <= k; i++)
    {
        printf("entrer les nombres : ");
        scanf("%d", &N[i]);
    }
      printf(" guess la numbre: ");
        scanf("%d", &M);
    for (int d = 0; d <= k; d++)
    {
            if (N[d] == M)
            {
                s=M;
                count++;
            }
        
    }
    printf("le nombre est %d et le nombre de repete est = %d", s,count);
}
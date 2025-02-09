#include <stdio.h>

int main()
{

    int k, i, count, M, s, temp;
    count = 0;
    printf("entrer une nombre array : ");
    scanf("%d", &k);
    int N[k];
  
    for (i = 0; i <= k; i++)
    {
        printf("entrer les nombres : ");
        scanf("%d", &N[i]);
    }

    for (int d = 0; d <= k; d++)
    {
        for (int j = i + 1; i < k; j++)
        {

            if (N[d] > N[j])
            {
                temp = N[d];
                N[d] = N[j];
                N[j] = temp;
            }
        }
    }
    for (int r = 0; r <= k; r++)
    {
        printf("%d", N[r]);
    }
}
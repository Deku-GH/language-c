#include <stdio.h>

int main()
{
    int N[5];
        for(int i = 0; i<= 5; i++)
        {
            printf("entrer la nombre %d = ",i);
         scanf("%d", &N[i]);
        }
    for (int k = 6; k >= 0; k--)
        printf("la nombre %d = %d\n", 6 - k, N[k]);
}
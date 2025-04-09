#include <stdio.h>

int main()
{

    int n;
    printf("entrez la nombre : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            printf("%d", j);
        }
    }
}
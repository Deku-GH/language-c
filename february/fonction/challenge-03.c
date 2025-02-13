#include <stdio.h>


void multi(int x)
{
    int i = 0;

    while (i <= 10)
    {
        printf(" %d * %d= %d\n ", x, i, i * x);
        i++;
    }
}

int main()
{
    int x;
    printf("entrez la nombre : ");
    scanf("%d", &x);

    multi(x);
}
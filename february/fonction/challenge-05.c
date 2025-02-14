#include <stdio.h>

int cul(int N)
{
    int count, P;

    count =0 ;
    do
    {
        N = N / 10;
        count++;

    } while (N != 0);

    return (count);
}

int main()
{

    int N, m;
    printf("entez la nombre : ");
    scanf("%d", &N);
    m = cul(N);
    printf("le nombre de la nemuro est : %d", m);
}
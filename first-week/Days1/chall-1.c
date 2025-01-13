#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum;
    printf("enter une numbre : ");
    scanf("%d", &n);
    sum = 0;

    for (i = 0; i <= n; i++)
        sum = sum + pow(10, i);

    printf("la somme est = %d", sum);
}
#include <stdio.h>

int main()
{
     int N, i;
     printf("entrer un nombre : ");
     scanf("%d", &N);
     i = N;
     while (i < N + 10)
     {
          printf("%d ", i );
          i++;
     }
}
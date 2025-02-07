#include <stdio.h>

int main()
{

   int N, i;
   printf("entrer un nombre : ");
   scanf("%d", &N);

   for (i = N; i <= N + 10; i++)
      printf("%d ", i);
}
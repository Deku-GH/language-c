#include <stdio.h>

int main() {
  int n, i, sum;
  
  printf("enter la nombre n = ");
  scanf("%d",&n);
   sum = 0 ;
  for( i = 0; i <= n; i++)
     sum+=i;

printf("la somme est : %d",sum);
}
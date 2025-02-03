#include <stdio.h>

int main() {
    int  X[5], som;
for (int  i = 1; i <= 5; i++)
{
    printf("enter la nombre %d : ",i);
    scanf("%d",&X[i]);
}
som = 0;
for( int j = 1; j<=5 ; j++)
   {
    som += X[j];
   }

printf("resulta = %d", som);
}

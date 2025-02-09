#include <stdio.h>

int main()
{
    int k, i, somme;
    
    printf("commbien  des nomre : ");
   scanf("%d",&k);
   int N[k];
    for (i = 0; i <= k; i++)
    {
        printf("entrer le nombre %d: ",i);
        scanf("%d",&N[i]);
    }
    somme =0;
    for (int i = 0; i <= 10; i++)
    {
        if (i==0 || i==10)
        {
            somme+= N[i];
        }
        
        
    }
    printf("%d + %d = %d",N[0] , N[k],somme);
    
}
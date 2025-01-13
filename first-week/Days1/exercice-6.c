#include <stdio.h>


int main () 
{
int n[10] ,i ,pair ,inpair;

for(i = 0 ;i <= 10 ;i++ )
    {
    printf("entrer dix nombre : " );
    scanf("%d",&n[i]);

    
        if ((n[i]/2)==0)
             pair = pair + n[i];

        else 
             inpair = inpair + n[i];

    }

  printf("la div entrer leas deux %d ",pair -inpair);

}
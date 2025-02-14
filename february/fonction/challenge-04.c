#include <stdio.h>

int premie(int N){
    int P = 1;
    for (int  i = 2; i < N; i++)
    {
        if (N%i==0)
        {
            P=0;
            break;
        }
    }
    
return(P);

}

int main() {
 int N,resulta;
 printf("entez la nombre : ");
 scanf("%d",&N);

resulta = premie(P);
 if (resulta == o )
 {
    printf("la nombre est inpremie ");
 }
 else
       
    printf("la nombre n est pas premie ");

}
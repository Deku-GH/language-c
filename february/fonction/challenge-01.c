#include <stdio.h>

void signe(int A, int B)
{
    if (A >= 0 && B >= 0)
    {
        printf("les valeures sont de meme signe \n");
    }
    else
        printf("les valeures ne sont pas meme signe \n");
}

int minimum(int A, int B)
{
    int min;
    min = 0;
    if (A < B)
    {
        min = A;
    }
    else if (A > B)
    {
        min = B;
    }

    return (min);
}
int maximum(int A, int B)
{
    int max;
    max = 0;
    if (A > B)
    {
        max = A;
    }
    else if (A < B)
    {
        max = B;
    }

    return (max);
}

int main()
{
    int A, B, max, min;

    printf("entrez la nombre A = ");
    scanf("%d", &A);
    printf("entrez la nombre b = ");
    scanf("%d", &B);

    signe(A,B);
     max = maximum(A, B);
     min = minimum(A, B);
    printf("le maxmmum est : %d \n",max);

    printf("le minimim est : %d ",min );
    
}
#include <stdio.h>

int main()
{
    int T[8], count;
    int fp[8]={-1,-1,-1,-1,-1,-1,-1,-1};

    for (int i = 0; i < 8; i++)
    {
        printf("entre le nombre %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        count = 1;
        for (int j = i + 1; j <= 8; j++)
        {
            if (T[i] == T[j])
            {
                fp[j] = 0;
                count++;
               
            }
             if (fp[i] != 0)
                {
                    fp[i] = count;
                }
        }
    }
    printf("le nombre non répétés \n ");
     for (int i = 0; i < 8; i++)
     {
        if (fp[i]==1)
        {
            printf("%d ",T[i]);
        }
        
     }
     
}
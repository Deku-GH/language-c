#include <stdio.h>

int main()
{
    int T[10], max1, max2;

    for (int i = 0; i < 10; i++)
    {
        printf("donne la nobre %d : \n", i + 1);
        scanf("%d", &T[i]);
    }
    max1 = T[0];
    max2 = T[1];
    for (int i = 1; i < 10; i++)
    {
        if (max1 < T[i])
        {
            max2 = max1;
            max1 = T[i];
        }
        else if (max2 < T[i] && max1 > T[i])
        {
            max2 = T[i];
        }
    }

    printf("le max 1 = %d et le max 2 = %d ", max1, max2);
}
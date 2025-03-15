#include <stdio.h>

int main()
{

    char rabby[3][3] = {{'c', 'c', 'c'}, {'c', 'c', 'c'}, {'c', 'c', 'c',}};
    char m = 'k';
    int x, y;

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%c", rabby[i][j]);
        }
    }
    printf("\nentrez la position\n");
    scanf("%d%d", &x,&y);
       x= x-1;
       y=y-1;
    rabby[x][y] = m;

    for (int i = 0; i < 3; i++)
    {
         printf("\n 🌿");
        for (int j = 0; j < 3; j++)
        {
            printf("\t%c", rabby[i][j]);
        }
    }
}
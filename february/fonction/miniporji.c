#include <stdio.h>
#include <string.h>

int main()
{

    char colore[10][10];
    char doore[10][10] = {"blue", "green", "red"};

choose:
    printf("Choose a color red or blue or  Green.");
    scanf("%s", colore[0]);

    for (int i = 0; i < 1; i++)
    {
        if (strcmp(colore[0], "A") > 0)
        {
            for (int j = 0; j < 3; j++)
            {

                if (strcmp(colore[0],doore[j]) == 0)
                {
                    printf("ok");
                }
                goto choose;
               
            }
        }

        else
        {
            printf("choos one from list\n");
            goto choose;
        }
    }
}
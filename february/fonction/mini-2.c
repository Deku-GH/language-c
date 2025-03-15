#include <stdio.h>
#include <string.h>
char colore[10][10];
char doore[10][10] = {"blue", "green", "red"};
char box[10][10] = {"yellow", "orange", "purple"};

int main()
{
    int count = 0;

choose:
    printf("Choose a color red or blue or  Green.");
    scanf("%s", colore[0]);

    for (int i = 0; i < 1; i++)
    {
        if (strcmp(colore[0], "A") > 0)
        {
            for (int j = 0; j < 3; j++)
            {

                if (strcmp(colore[0], doore[j]) == 0)
                {
                    if (strcmp(colore[0], doore[0]) == 0)
                    {
                        printf("you loste");
                    }
                    if (strcmp(colore[0], doore[1]) == 0)
                    {

                        char color[10][10];
                        int count = 0;

                    choose:
                        printf("Choose a box color yellow or orange or purple.");
                        scanf("%s", color[0]);
                        strcpy(colore[0], color[0]);

                        for (int i = 0; i < 1; i++)
                        {
                            if (strcmp(colore[0], "A") > 0)
                            {
                                for (int j = 0; j < 3; j++)
                                {

                                    if (strcmp(colore[0], box[j]) == 0)
                                    {
                                        if (strcmp(colore[0], box[0]) == 0)
                                        {
                                            printf("you loste");
                                        }
                                        if (strcmp(colore[0], box[1]) == 0)
                                        {
                                            printf("you win");
                                        }
                                        if (strcmp(colore[0], box[2]) == 0)
                                        {
                                            printf("khhhhhhh");
                                        }
                                    }
                                    else
                                        count++;

                                    if (count == 3)
                                        goto choose;
                                }
                            }
                        }
                    }
                    if (strcmp(colore[0], doore[2]) == 0)
                    {
                        printf("khhhhhhh");
                    }
                }
                else
                    count++;

                if (count == 3)
                    goto choose;
            }
        }
    }
}
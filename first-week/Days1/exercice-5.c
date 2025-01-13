#include <stdio.h>
#include <string.h>

int main()
{

    char N[100];
    int length;

    printf("entrer un nombre = ");
    scanf("%s", &N);

    length = strlen(N);

    printf("le nombre de chiffres est  %d", length);
}
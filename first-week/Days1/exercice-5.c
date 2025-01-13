#include <stdio.h>
#include <stting.h>

int main()
{

    char N[100];
    int length;

    printf("entrer un nombre = ");
    scanf("%s", &N);

    length = strlen(N);

    printf("la nombre de nombre est = %d", length);
}
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter la primer valeur de a: ");
    scanf("%d", &a);

    printf("enter la primer valeur de b: ");
    scanf("%d", &b);

    printf("enter la primer valeur de c: ");
    scanf("%d", &c);

    if (a > b && a > c )
       printf(" a est la groud numbre ");
    
    else if (b > a && b > c )
        printf("b est la groud nambre ");
    
    else if ( c > a && c > b)
        printf("c est la groud nambre ");
    else 
       printf("les nombre est egal");
}
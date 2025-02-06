#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    debut :
    printf("entrez un nombre :  ");
    scanf("%d",&n);
    
      if (n<1 || n>5)
      {
        goto debut;
      }
       printf("bravo");

}
#include <stdio.h>
#include <math.h>
const float PI = 3.14;

float diametre(float R)
{
    int D;
    D = R * 2;
    return (D);
}

float surface(float R)
{
    float A;
    A = PI * pow(R, 2);

    return (A);
}

float perimetre(float R)
{
    float P;
    P = 2 * PI * R;

    return (P);
}

int main()
{
    float R, S, D, P;
    printf("entrez le rayon de cyrcle : ");
    scanf("%f", &R);
    S = surface(R);
    D = diametre(R);
    P = perimetre(R);

    printf("la surface : %.2f \n", S);
    printf("le daimetre : %.2f \n", D);
    printf("perimetre : %.2f", P);
}
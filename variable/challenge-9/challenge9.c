#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calculer la distance entre deux points

int main()
{
    float x1, y1, x2, y2;
    float MN;

    printf("Veuillez entrer x1 du point M: ");
    scanf("%f", &x1);
    printf("Veuillez entrer Y1 du point M: ");
    scanf("%f", &y1);
    printf("Veuillez entrer X2 du point N: ");
    scanf("%f", &x2);
    printf("Veuillez entrer y2 du point N: ");
    scanf("%f", &y2);

    MN = sqrt(pow((x2 - x1), 2) + pow((y2 -y1), 2));

    printf("La distance entre M et N: %.2f\n", MN);


    return 0;
}

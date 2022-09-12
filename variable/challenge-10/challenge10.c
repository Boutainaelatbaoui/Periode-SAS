#include <stdio.h>
#include <stdlib.h>

// Calculation du circonférence d'un cercle

int main()
{
    float r, circonference;
    const float PI = 3.14;

    printf("Veuillez entrer la valeur du rayon: ");
    scanf("%f", &r);

    circonference = 2*PI*r;

    printf("La circonference d'un cercle est: %.2f\n", circonference);

    return 0;
}

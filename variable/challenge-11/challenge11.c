#include <stdio.h>
#include <stdlib.h>

//Calcul la circonférence d'un rectangle

int main()
{
    float longueur, largeur, circonference;

    printf("Veuillez entrer la longueur: ");
    scanf("%f", &longueur);

    printf("Veuillez entrer la largeur: ");
    scanf("%f", &largeur);

    circonference = 2 * (longueur + largeur);

    printf("La circonference d'un rectangle est: %.2f\n", circonference);


    return 0;
}

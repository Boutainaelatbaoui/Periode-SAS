#include <stdio.h>
#include <stdlib.h>

// Affichage Température

int main()
{
    //Conversion du °F au °C
    float F, C;

    printf("Veuillez saisir la temperature en Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("La temperature en degre Celsius: %2.f°C\n", C);

    //Affichage la sensation ressentie (très froid, froid, chaud, très chaud)
    if(F <= 0)
        printf("Il fait tres froid\n");
    else if(F < 25)
        printf("Il fait froid\n");
    else if(F == 25)
        printf("Il fait chaud\n");
    else
        printf("Il fait tres chaud\n");

    return 0;
}


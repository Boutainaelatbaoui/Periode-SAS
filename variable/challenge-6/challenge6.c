#include <stdio.h>
#include <stdlib.h>

//Conversion du °C au °F

int main()
{
    float F, C;

    printf("Veuillez entrer la temperature en C: ");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("La temperature en F: %2.f F\n", F);

    return 0;
}

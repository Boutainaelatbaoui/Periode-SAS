#include <stdio.h>
#include <stdlib.h>

//Conversion du °F au °C

int main(){

    float F, C;

    printf("Veuillez saisir la temperature en Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("La temperature en degre Celsius: %2.f°C\n", C);

    return 0;
}

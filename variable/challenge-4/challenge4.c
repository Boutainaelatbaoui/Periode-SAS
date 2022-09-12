#include <stdio.h>
#include <stdlib.h>

//Conversion du Mile au metre

int main()
{
    float Metre, Mile, km;

    printf("Veuillez saisir la distance en mile: ");
    scanf("%f", &Mile);

    km = Metre * 1000;

    km = Mile/1.609;

    Metre = km/1000;

    printf("La distance en metre est: %f \n", Metre);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Conversion du metre en mille

int main()
{
    float Metre, Mile;

    printf("Veuillez saisir la distance en metre: ");
    scanf("%f", &Metre);

    Mile = Metre * 1609;

    printf("La distance en mile: %2.f mile\n", Mile);


}

#include <stdio.h>
#include <stdlib.h>

//Nombre entier à trois chiffres en ordre inverse

int main()
{
    int nombre, inverse;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nombre);

    inverse = 0;

    inverse = inverse*10 + nombre%10;
    nombre = nombre/10;
    inverse = inverse*10 + nombre%10;
    nombre = nombre/10;
    inverse = inverse*10 + nombre%10;

    printf("L'inverse de %d est: %d", nombre, inverse);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Affichage de la valeur octale et hexad�cimale �quivalente

int main()
{
    int n;

    printf("Veuillez entrer un nombre entier: ");
    scanf("%d", &n);

    printf("La valeur �quivalente de %d en octal: %o\n", n, n);
    printf("La valeur �quivalente de %d en hexad�cimal: %x\n", n, n);

    return 0;
}

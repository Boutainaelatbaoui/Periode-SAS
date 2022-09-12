#include <stdio.h>
#include <stdlib.h>

//Affichage de la valeur octale et hexadécimale équivalente

int main()
{
    int n;

    printf("Veuillez entrer un nombre entier: ");
    scanf("%d", &n);

    printf("La valeur équivalente de %d en octal: %o\n", n, n);
    printf("La valeur équivalente de %d en hexadécimal: %x\n", n, n);

    return 0;
}

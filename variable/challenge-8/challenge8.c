#include <stdio.h>
#include <stdlib.h>

// Moyenne et somme de 4 nombres

int main()
{
    float n1, n2, n3, n4;
    float somme, moyenne;

    printf("Veuillez entrer le 1er nombre: ");
    scanf("%f", &n1);

    printf("Veuillez entrer le 2eme nombre: ");
    scanf("%f", &n2);

    printf("Veuillez entrer le 3eme nombre: ");
    scanf("%f", &n3);

    printf("Veuillez entrer le 4eme nombre: ");
    scanf("%f", &n4);

    somme = n1 + n2 + n3 + n4;

    moyenne = somme / 4;

    printf("La somme de 4 nombres est: %.2f\n", somme);
    printf("La moyenne de 4 nombres est: %.2f\n", moyenne);


    return 0;
}

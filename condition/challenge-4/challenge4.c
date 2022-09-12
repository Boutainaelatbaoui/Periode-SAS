#include <stdio.h>
#include <stdlib.h>

//Calculer la somme et renvoie le triple si les deux valeurs sont identiques

int main()
{
    int a, b, somme;

    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);

    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    somme = a + b;

    if(a == b)
    {
        printf("Le triple de A + B est: %d\n", somme*3);
    }
    else
    {
        printf("La somme de A et B est: %d\n", somme);
    }

    return 0;
}

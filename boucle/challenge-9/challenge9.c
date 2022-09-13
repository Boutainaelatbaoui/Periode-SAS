#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ecrivez un programme c pour trouver la puissance d'un nombre en utilisant des boucles while.
Le nombre de la base (>0) et l'exposant (>=0) sont pris dans les cas de test.*/

int main()
{
    int a, b, puissance;

    printf("Veuillez entrer le nombre de la base: ");
    scanf("%d", &a);
    printf("Veuillez entrer le nombre de l'exposant: ");
    scanf("%d", &b);

    while(a>0 && b>= 0)
    {
        puissance = pow(a, b);
        printf("La puissance d'un nombre est: %d\n", puissance);
        printf("Veuillez entrer le nombre de la base: ");
        scanf("%d", &a);
        printf("Veuillez entrer le nombre de l'exposant: ");
        scanf("%d", &b);
    }



    return 0;
}

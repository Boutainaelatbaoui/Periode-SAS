#include <stdio.h>
#include <stdlib.h>

/*Ecrire un programme C qui lit un entier et l'affiche inversé.
On choisira de ne pas afficher chiffre par chiffre mais de construire l'entier inversé puis l'afficher.*/

int main()
{
    int nbr, inverse;
    inverse = 0;
    printf("veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    while(nbr!=0)
    {
        inverse = (inverse*10) + (nbr%10);
        nbr = nbr/10;
    }
    printf("L'inverse est: %d\n", inverse);

}

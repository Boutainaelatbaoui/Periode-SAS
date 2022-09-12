#include <stdio.h>
#include <stdlib.h>

//Ecrire un programme C qui lit un entier puis détermine s'il est premier ou non.

int main()
{
    int nbr, i, estpremier;

    estpremier = 1;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    for(i=2; i<nbr; i++)
    {
        if(nbr%i == 0)
        {
            estpremier = 0;
            break;
        }
    }

    if(estpremier == 1)
        printf("Le nombre %d est premier\n", nbr);
    else
        printf("Le nombre %d n'est pas premier\n", nbr);
}

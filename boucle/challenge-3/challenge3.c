#include <stdio.h>
#include <stdlib.h>

typedef Bool;
#define true 1
#define false 0

//Ecrire un programme C qui lit un entier puis détermine s'il est premier ou non.

int main()
{
    int nbr, i;

    Bool estpremier = true;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    for(i=2; i<=nbr/2; i++)
    {
        if(nbr%i == 0)
        {
            estpremier = false;
            break;
        }
    }

    if(estpremier)
        printf("Le nombre %d est premier\n", nbr);
    else
        printf("Le nombre %d n'est pas premier\n", nbr);
}

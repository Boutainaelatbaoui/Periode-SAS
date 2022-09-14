#include <stdio.h>
#include <stdlib.h>

/*Créez une fonction bool isPremier() pour vérifier si un nombre il est premier ou non
(constatez que le type de la fonction est bool, donc vous devez créez votre type Bool).*/

typedef Bool;
#define true 1
#define false 0

Bool ispremier(int);


int main()
{
    int nbr;
    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    if(ispremier(nbr))
        printf("Le nombre %d est premier\n", nbr);
    else
        printf("Le nombre %d n'est pas premier\n", nbr);

    return 0;
}

Bool ispremier(int nbr)
{
    for(int i=2; i<=nbr/2; i++)
    {
        if(nbr%i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

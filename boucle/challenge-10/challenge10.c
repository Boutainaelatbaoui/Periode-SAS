#include <stdio.h>
#include <stdlib.h>

//Ecrivez un programme en C pour calculer la somme du maximum de 10 nombres en ignorant les nombres négatifs du calcul.

int main()
{
    int nbr, i, somme;

    somme = 0;

    for(i=1; i<=10; i++)
    {
        printf("Veuillez entrer un nombre: ");
        scanf("%d", &nbr);

        if(nbr < 0)
            continue;
        somme = somme + nbr;
    }
    printf("La somme est: %d\n", somme);

    return 0;
}

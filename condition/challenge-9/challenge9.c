#include <stdio.h>
#include <stdlib.h>

/*Ecrire un programme C qui lit une date au format 15/10/2021
et l'affiche sous le format suivant: 15-Octobre-2021.*/

int main()
{
    int jour, mois, annee;

    printf("Veuillez saisir la date au format jour/mois/annee: ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    if(jour < 10)
    {
        printf("0%d-", jour);
    }
    else
    {
        printf("%d-", jour);
    }

    switch(mois)
    {
        case 1:
            printf("Janvier");
            break;
        case 2:
            printf("Fevrier");
            break;
        case 3:
            printf("Mars");
            break;
            break;
        case 4:
            printf("Avril");
            break;
            break;
        case 5:
            printf("Mai");
            break;
            break;
        case 6:
            printf("Juin");
            break;
            break;
        case 7:
            printf("Juillet");
            break;
            break;
        case 8:
            printf("Aout");
            break;
            break;
        case 9:
            printf("Septembre");
            break;
            break;
        case 10:
            printf("Octobre");
            break;
            break;
        case 11:
            printf("Novembre");
            break;
            break;
        case 12:
            printf("Decembre");
            break;
    }
    printf("-%d\n", annee);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Afficher la mention obtenue par un élève en fonction de la moyenne de ses notes

int main()
{
    float moyenne;

    printf("Veuillez entrer votre moyenne: \n");
    scanf("%f", &moyenne);

    if(moyenne < 10)
    {
        printf("tu es recale\n");
    }
    else if(moyenne >= 10 && moyenne < 12)
    {
        printf("Mention passable\n");
    }
    else if(moyenne >= 12 && moyenne < 14)
    {
        printf("Mention assez bien\n");
    }
    else if(moyenne >= 14 && moyenne < 16)
    {
        printf("Mention bien\n");
    }
    else
    {
        printf("Mention très bien\n");
    }

    return 0;
}

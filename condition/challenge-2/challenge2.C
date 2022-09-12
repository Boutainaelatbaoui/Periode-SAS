#include <stdio.h>
#include <stdlib.h>

//Paire ou Impaire

int main()
{
    int nbr;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    if(nbr%2 == 0)
    {
        printf("Le nombre %d est paire\n", nbr);
    }
    else
    {
        printf("Le nombre %d est impaire\n", nbr);
    }

    return 0;
}

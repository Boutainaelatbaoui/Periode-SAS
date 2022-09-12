#include <stdio.h>
#include <stdlib.h>

//pyramide d'étoile

int main()
{
    int i, j,k, rows;

    printf("Veuillez entrer le nombre des lignes a composer: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=(i*2)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

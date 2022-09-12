#include <stdio.h>
#include <stdlib.h>

//Table de multiplication

int main()
{
    int nbr, i;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    for(i = 1; i<=10; i++)
    {
        printf("%d X %d = %d\n", i, nbr, i*nbr);
    }
    return 0;
}

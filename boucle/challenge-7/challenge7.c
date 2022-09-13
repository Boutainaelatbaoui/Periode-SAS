#include <stdio.h>
#include <stdlib.h>

//Ecrire un programme C qui calcule le nième terme de la suite de Fibonacci, définie comme suit: Un=Un-1+Un-2 où U1=U0=1.

int main()
{
    int nbr, i;
    int n1 = 0, n2 = 1;

    int n3 = n1 + n2;

    printf("Veuillez entrer le nombre: ");
    scanf("%d", &nbr);

    printf("%d\n%d\n", n1, n2);

    for(i = 3; i<=nbr; i++)
    {
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }

    return 0;
}


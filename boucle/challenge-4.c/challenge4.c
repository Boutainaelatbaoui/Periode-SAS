#include <stdio.h>
#include <stdlib.h>

/*Ecrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0. Et qui doit négliger toute entrée strictement supérieure à 100.
Puis calcule et affiche la somme et le max des éléments de cette série.*/

int main()
{
    int n, sum, max;

    sum = 0;
    max = 0;

    do{
        printf("Veuillez entrer un nombre: ");
        scanf("%d", &n);
        if(n>100)
            continue;
        sum = sum + n;
        if(n > max)
            max = n;
    }while(n>0);
    printf("La somme des elements de cette serie est: %d\n", sum);
    printf("Le max des elements de cette serie est: %d\n", max);



    return 0;
}

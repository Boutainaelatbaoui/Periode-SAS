#include <stdio.h>
#include <stdlib.h>

/*Ecrire un programme C qui lit une s�rie d'entiers positifs inf�rieurs � 100 termin�e par 0. Et qui doit n�gliger toute entr�e strictement sup�rieure � 100.
Puis calcule et affiche la somme et le max des �l�ments de cette s�rie.*/

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

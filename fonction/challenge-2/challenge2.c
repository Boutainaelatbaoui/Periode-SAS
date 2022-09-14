#include <stdio.h>
#include <stdlib.h>

/*Créez une fonction echanger() pour échanger la valeur de a avec la valeur de b,
qu'est ce que vous constatez ? affichez aussi l'etat initial des variables a et b.*/

void echanger(int, int);

int main()
{
    int a, b;

    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);
    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    printf("L'etat initial des variables est: A = %d et B = %d\n", a, b);
    echanger(a, b);

    return 0;
}

void echanger(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("L'etat des variables aprés l'echangement est: A = %d et B = %d\n", a, b);
}


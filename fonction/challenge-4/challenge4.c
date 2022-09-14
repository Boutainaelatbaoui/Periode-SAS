#include <stdio.h>
#include <stdlib.h>

/*Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true, sinon on retourne false.*/

typedef Bool;
#define true 1
#define false 0

void divededby(int, int);

int main()
{
    int a, b;
    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);
    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    divededby(a, b);

    return 0;
}

 void divededby(int a, int b)
{
    int estpremier;

    for(int i=2; i<a; i++)
    {
        if(a%i == 0)
        {
            estpremier = false;
            break;
        }
    }
    estpremier = true;

    if(estpremier && b!=0)
         printf("A / B = %d\n", a/b);
    else
        printf("A doit etre un nombre premier et B n'est pas egal a 0\n");
}



#include <stdio.h>
#include <stdlib.h>

/*Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true, sinon on retourne false.*/

int divededby(int, int);

int main()
{
    int n, a;
    printf("Veuillez entrer la valeur de n: ");
    scanf("%d", &n);
    printf("Veuillez entrer la valeur de a: ");
    scanf("%d", &a);

    printf("n / a = %d\n", divededby(n, a));

    return 0;
}

int divededby(int n, int a)
{
    return n/a;
}



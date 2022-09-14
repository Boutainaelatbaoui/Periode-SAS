#include <stdio.h>
#include <stdlib.h>

//Créez une fonction add(int a , int b) qui permet de faire l'addition des deux nombres a et b.

int add(int, int);

int main()
{
    int a, b;

    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);
    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    printf("A + B = %d\n", add(a, b));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

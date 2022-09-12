#include <stdio.h>
#include <stdlib.h>

//Calcule et affichage résultat en format décimal

int main()
{
    int a, b;

    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);
    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    printf("A + B = %f\n", (float)a + (float)b);
    printf("A - B = %f\n", (float)a - (float)b);
    printf("A * B = %f\n", (float)a * (float)b);
    printf("A / B = %f\n", (float)a / (float)b);
    printf("A %% B = %f\n", a % b);

    return 0;
}




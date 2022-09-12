#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Equation deuxième degré

int main()
{
    int a, b, c, x0, x1, x2;
    double delta;

    printf("Veuillez saisir les valeurs de votre equation: \n");
    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);

    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    printf("Veuillez entrer la valeur de C: ");
    scanf("%d", &c);

    delta = pow(b, 2) -4*a*c;

    //printf("%lf", delta);

    if(delta == 0)
    {
        x0 = -b/(2*a);

        printf("L'equation a une seule solution: X0 = %d\n", x0);
    }
    else if(delta > 0)
    {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("L'equation a deux solutions distinctes : X1 = %d et X2 = %d\n", x1, x2);
    }
    else
    {
        printf("L'equation n'a pas de solution reelle.\n");
    }

    return 0;
}

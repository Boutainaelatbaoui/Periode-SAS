#include <stdio.h>
#include <stdlib.h>

//Permutation Sous Conditions

int main()
{
    int a, b, temp;

    printf("Veuillez entrer la valeur de A: ");
    scanf("%d", &a);

    printf("Veuillez entrer la valeur de B: ");
    scanf("%d", &b);

    if(a != b || a < b)
    {
        printf("Avant permutation: A = %d et B = %d\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("Apres permutation: A = %d et B = %d\n", a, b);
    }
    else
    {
        printf("A = %d\tB = %d\n", a, b);
    }



    return 0;
}

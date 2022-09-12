#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Palindrome

int main()
{
    char mot[100], mot_inverse[100];

    printf("Veuillez entrer un mot: ");
    gets(mot);

    //Copier le mot
    strcpy(mot_inverse, mot);

    //Comparaison
    if(strcmp(mot, strrev(mot_inverse)) == 0 )
    {
        printf("%s est un palindrome.\n", mot);
    }
    else
    {
        printf("%s n'est pas un palindrome.\n", mot);
    }

    return 0;
}

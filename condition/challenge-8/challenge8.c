#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Ecrire un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non.
Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.*/

int main()
{
    char c;

    printf("Veuillez saisir un caractere: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
    {
        printf("%c est une alphabet en majuscule.\n", c);
    }
    else if(c >= 'a' && c <= 'z')
    {
        printf("%c est une alphabet en minuscule.\n", c);
    }
    else
    {
        printf("%c n'est pas une alphabet!!\n", c);
    }

    return 0;
}

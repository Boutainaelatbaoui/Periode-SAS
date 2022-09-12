#include <stdio.h>
#include <stdlib.h>

/*Ecrire un programme C qui lit deux instants dans le format HH:MM:SS, et affiche un des messages suivants:
Le premier instant vient avant le deuxième;
Le deuxième instant vient avant le premier;
Il s'agit du même instant.*/

int main()
{
    int h1, h2;
    int m1, m2;
    int s1, s2;
    int x = 0;

    printf("Veuillez entrer deux instants dans le format HH:MM:SS: \n\n");

    printf("Veuillez saisir le premier instant: ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Veuillez saisir le deuxieme instant: ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    if(h1 < h2)
        x = 1;
    else if(h1 == h2 && m1 < m2)
        x = 1;
    else if(h1 == h2 && m1 == m2 && s1 < s2)
        x = 1;
    else if(h1 == h2 && m1 == m2 && s1 == s2)
        x = 2;

    switch(x)
    {
        case 0:
            printf("Le premier instant vient avant le deuxième\n");
            break;
        case 1:
            printf("Le deuxieme instant vient avant le premier\n");
            break;
        case 2:
            printf("Il s'agit du meme instant\n");
            break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Programme pour afficher des informations personnelles

int main(){

    char nom[25];
    char prenom[25];
    int age;
    char sexe[25];
    int tele;

    printf("Veuillez saisir votre nom: \n");
    scanf("%[^\n]%*c", &nom);
    printf("Veuillez saisir votre prenom: \n");
    scanf("%[^\n]%*c", &prenom);
    printf("Veuillez saisir votre age: \n");
    scanf("%d", &age);
    printf("Veuillez saisir votre sexe: \n");
    scanf("%s", &sexe);
    printf("Veuillez saisir votre numero de telephone: \n");
    scanf("%d", &tele);

    printf("\n\nNom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("age: %d\n", age);
    printf("sexe: %c\n", sexe);
    printf("Numero de telephone: %d\n", tele);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ecrire un programme C qui lit les coordonnées des deux extrémités d'un segment,
et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.*/

int main()
{
    double x1, y1, x2, y2, a, b;
    double distance, distance1, distance2;

    printf("Veuillez entrer x1 et y1: ");
    scanf("%lf%lf", &x1, &y1);

    printf("Veuillez entrer x2 et y2: ");
    scanf("%lf%lf", &x2, &y2);

    printf("Veuillez entrer a et b: ");
    scanf("%lf%lf", &a, &b);

    distance1 = sqrt(pow((x1-a), 2)+ pow((y1-b), 2));
    distance2 = sqrt(pow((x2-a), 2)+ pow((y2-b), 2));
    distance  =  sqrt(pow((x1-x2), 2)+ pow((y1-y2), 2));

    if(distance == distance1 + distance2)
        printf("Le point se trouve sur le segment.\n");
    else
        printf("Le point ne se trouve pas sur le segment.\n");

    return 0;
}

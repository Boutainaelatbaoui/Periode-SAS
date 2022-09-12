#include <stdio.h>
#include <stdlib.h>

typedef Bool;
#define true 1
#define false 0

int main()
{
    int n, p, i, estpremier;
    printf("Veuillez entrer le nombre: ");
    scanf("%d", &n);

    for(p=2; p<=n; p++)
    {
        Bool estpremier = true;
        for(i=2; i<p; i++)
        {
            if(p%i==0)
            {
                estpremier = false;
                break;
            }
        }
        if(estpremier)
            printf("%d\n", p);
    }


    return 0;
}

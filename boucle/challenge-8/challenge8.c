#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ecrire un programme C qui utilise le principe de dichotomie pour trouver la solution
de l'�quation x3+12x2+1=0 dans l'intervalle [-15,-10] avec une pr�cision de 0,00001.*/

int main()
{
    float a, b, m, fa, fb, fm;
    a = -15;
    b=-10;
    while(b-a>0.00001)
    {
        m = (a+b)/2;
       fa = pow(a, 3)+12*(pow(a, 2))+1;
       fb = pow(b, 3)+12*(pow(b, 2))+1;
       fm = pow(m, 3)+12*(pow(a, 2))+1;
       if(fa*fm <= 0)
           b = m;
       else
           a = m;
    }
    printf("la solution de l'equation x3+12x2+1=0 dans l'intervalle [-15,-10] est :%.4f\n",m);
    return 0;
}

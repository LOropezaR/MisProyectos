#include <stdio.h>
#include <stdlib.h>
//izquierda, derecha, derecha, derecha, izquierda, izquierda
int main()
{
    int I=1;
    int D=0;
    int r2, decision;
    printf("Complete el laberinto\n");
    printf("Para ir a la izquierda escriba 1, para ir a la derecha escriba 0\n");
    printf("Izquierda o derecha? 1/0\n");
    scanf("%i", &decision);
    if(decision !=I)
    {
        printf("El raton se ha electrocutado, intentelo de nuevo\n");
        return 0;
    }
    for(int vuelta=0;vuelta<=2;vuelta++)
    {
        printf("Izquierda o derecha? 1/0\n");
        scanf("%i", &decision);
        if(decision!=D)
        {
        printf("El raton se ha electrocutado, intentelo de nuevo\n");
        return 0;
        }
    }

    for(int vuelta=0;vuelta<=1;vuelta++)
    {
        printf("Izquierda o derecha? 1/0\n");
        scanf("%i", &decision);
        if(decision!=I)
        {
        printf("El raton se ha electrocutado, intentelo de nuevo\n");
        return 0;
        }

    }
    printf("Felicidades, has completado el laberinto, vuelve pronto\n");

    return 0;
}

#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int w;
    printf("Inserisci l'età di Luca Casale\n");
    scanf("%d", &x);
    printf("Inserisci l'età di Luca Rotili\n");
    scanf("%d", &y);
    printf("Inserisci l'età di Francesca\n");
    scanf("%d", &z);
    printf("Inserisci l'età di Marco\n");
    scanf("%d", &w);
    printf("La somma delle età è:%d\n", x + y +z + w );

    return(0);
}
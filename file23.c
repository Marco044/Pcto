#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("Inserisci l'ascissa di un punto\n");
    scanf(" %d", &x);
    printf("Inserisci l'ordinata di un punto\n");
    scanf(" %d", &y);
    if (x==0 || y==0)
    {
        printf("Il punto si trova al centro del piano cartesiano o su uno dei 2 assi cartesiani\n");
    }
    else if (x>0 && y>0)
    {
        printf("Il punto si trova nel primo quadrante\n");
    }
    else if (x<0 && y>0)
    {
        printf("Il punto si trova nel secondo quadrante\n");
    }
    else if (x<0 && y<0)
    {
        printf("Il punto si trova nel terzo quadrante\n");
    }
    else if (x>0 && y<0)
    {
        printf("Il punto si trova nel quarto quadrante\n");
    }
    return(0);
}
    
    

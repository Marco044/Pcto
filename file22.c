#include <stdio.h> 
# include <stdlib.h>

int main()
{
    int casuale;
    int z=0;
    int y;
    while (y>=0)
    {
        printf("Inserisci un numero\n");
        scanf(" %d", &y);
        casuale = rand()%6;
        printf("%d\n", casuale);
        if (y==casuale)
        {
            z=z+1;
            printf("Il tuo punteggio è:%d\n", z);
        }
        else
        {
            printf("Il tuo punteggio è:%d\n", z);
        }
        
    }
    return(0);
    
    
    
}

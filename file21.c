#include <stdio.h>

int main()
{
    float x;
    float y;
    char z;
    printf("Inserisci un numero\n");
    scanf(" %f", &x);
    printf("Inserisci un altro numero\n");
    scanf(" %f", &y);
    printf("Inserisci un'operazione da svolgere tra +,-,*,/\n");
    scanf(" %c", &z);
    if (z=='+')
    {
        printf("Il risultato è %f\n", x+y);
    }
    else if (z=='-')
    {
        printf("Il risultato è %f\n", x-y);
    }
    else if (z=='*')
    {
        printf("Il risultato è %f\n", x*y );
    }
    else if (z=='/')
    {
        printf("Il risultato è %f\n", x/y);
    }
    return(0);
    
}
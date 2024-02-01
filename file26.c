#include <stdio.h>

void massimo(float a, float b)
{
    if (a==b)
    {
        printf("I due numeri sono uguali\n");
    }
    else if (a>b)
    {
        printf("%f è maggiore di %f\n", a, b);
    }
    else
    {
        printf("%f è maggiore di %f\n", b, a);
    }
}

int main()
{
    float x;
    float y;
    printf("Inserisci un numero\n");
    scanf(" %f", &x);
    printf("Inserisci un altro numero\n");
    scanf(" %f", &y);
    massimo(x, y);
    return(0);
}
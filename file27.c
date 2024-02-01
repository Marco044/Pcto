#include <stdio.h>

int fattoriale(int n)
{
    int a=1;
    int b=1;
    while (a<=n)
    {
        b=b*a;
        a=a+1;
    }
    return(b);
}

int main()
{
    int x;
    printf("Inserisci un numero\n");
    scanf(" %d", &x);
    printf("Il fattoriale di %d è %d\n", x, fattoriale(x));
    return(0);
}
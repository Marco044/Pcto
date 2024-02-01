#include <stdio.h>

void pari(int a)
{
    if (a%2==0 || a==0)
    {
        printf("Il numero è pari\n");
    }
    else
    {
        printf("Il numero è dispari\n");
    }
}
int main()
{
    int x;
    printf("Inserisci un numero\n");
    scanf(" %d", &x);
    pari(x);
    return(0);
}
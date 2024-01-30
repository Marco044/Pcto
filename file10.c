#include <stdio.h>

int main()
{
    int n1;
    int n2=1969;
    printf("Inserisci l'anno in cui sei nato\n");
    scanf("%d", &n1);
    int n3=n1-n2;
    int n4=n2-n1;
    if (n1==n2)
    {
        printf("Sei nato l'anno in cui l'uomo è andato sulla luna\n");
    }
    else if (n3>0)
    {
        printf("Sei nato %d anni dopo lo sbarco sulla Luna\n", n3);
    }
    else if (n4>0)
    {
        printf("Sei nato %d anni prima dello sbarco sulla Luna\n", n4);
    }
    return(0);
    
    
}
#include <stdio.h>

int main()
{
    char parola[100];
    wscanf(" %s", parola);
    int x=0;
    while (parola[x]!='\0')
    {
        if (parola[x]>='a' && parola[x]<='z')
        {
            parola[x]=parola[x]-32;
        }
         x=x+1;
    }
    printf("%s\n", parola);
    return(0);
}
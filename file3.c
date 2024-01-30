#include <stdio.h>

int main()
{
    int x;
    
    printf("Inserisci la tua età\n");
    scanf("%d", &x);
    if (x>=18)
    {
        printf("Sei maggiorenne\n");
    }
    else if (x<18)
    {
        printf("Sei minorenne\n");
    }

    return(0);


}
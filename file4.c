#include <stdio.h>

int main()
{
    int n;
    int x;
    printf("A quanti anni si può prendere la patente nel tuo stato?\n");
    scanf("%d", &n);
    printf("Quanti anni hai?\n");
    scanf("%d", &x);
    if (x>=n)
    {
       printf("Puoi prendere la patewnte\n");
    }
    else
    { 
        printf("Non puoi prendere la patente\n");
    
    }

    return(0);
    
}
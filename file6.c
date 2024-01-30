#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    printf("Inserisci un numero\n");
    scanf("%f", &n1);
    printf("Inserisci un altro numero\n");
    scanf("%f", &n2);
    printf("Inserisci un altro numero\n");
    scanf("%f", &n3);
    printf("I numeri sono:%f, %f, %f\n", n1, n2, n3);
    
    if (n1-n2==n2-n3)
    {
        printf("I tre numeri formano una progressione aritmetica\n");
    }
    else
    {
        printf("I tre numeri non formano una progressione aritmetica\n");
    }

    return(0);
}
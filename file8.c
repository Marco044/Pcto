#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    printf("Inserisci 3 numeri\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    if (n1+n2>n3 && n2+n3>n1 && n1+n3>n2)
    {
       if (n1!=n2 && n2!=n3 && n1!=n3)
    {
        printf("Il triangoplo è scaleno\n");
    
    }
    else if (n1==n2 && n2==n3)
    {
        printf("Il triangolo è equilatero\n");
    }
    else if ((n1==n2 && n2!=n3) || (n2==n3 && n2!=n1) || (n1==n3 && n1==n2))
    {
        printf("Il triangolo è isoscele\n");
    }
    }
    else
    {
        printf("I lati non formano un triangolo\n");
    }
    return(0);
    
}
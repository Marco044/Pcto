#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    double l1;
    double l2;
    double l3;
    printf("Inserisci la lunghezza del primo lato\n");
    scanf(" %lf", &l1);
    printf("Inserisci la lunghezza del secondo lato\n");
    scanf(" %lf", &l2);
    printf("Inserisci la lunghezza del terzo lato\n");
    scanf(" %lf", &l3);
    double p=l1+l2+l3;
    printf("Il perimetro del triangolo è:%lf\n", p);
    double a=sqrt((p/2)*(p/2-l1)*(p/2-l2)*(p/2-l3));
    printf("L'area del triangolo è:%lf\n", a);
    return(0);
}
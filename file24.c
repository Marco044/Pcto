#include <stdio.h>
#include <math.h>

float radice(float a, float b, float c)
{
    float p=a+b+c;
    float A;
    A=((p/2)*(p/2-a)*(p/2-b)*(p/2-c));;
    float temp, sqrt;
    sqrt = A / 2;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( A/temp + temp) / 2;
    } 
    printf("L'area del triangolo è:%f\n", sqrt);
}


int main()
{
    float l1;
    float l2;
    float l3;
    printf("Inserisci la lunghezza del primo lato\n");
    scanf(" %f", &l1);
    printf("Inserisci la lunghezza del secondo lato\n");
    scanf(" %f", &l2);
    printf("Inserisci la lunghezza del terzo lato\n");
    scanf(" %f", &l3);
    float p=l1+l2+l3;
    printf("Il perimetro del triangolo è:%f\n", p);
    radice(l1, l2, l3);
    return(0);
}
    



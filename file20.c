#include <stdio.h>

int main()
{
    char x;
    printf("Inserisci una lettera\n");
    scanf(" %c", &x);
    if (x=='a'|| x=='e'|| x=='i'|| x=='o'|| x=='u')
    {
       printf("La tua lettera è una vocale\n");
    }
    else
    {
        printf("La tua lettera è una consonante\n");
    }
  
    
    return(0);
}
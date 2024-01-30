#include <stdio.h>

int main()
{ 
    float x;
    printf("Inserisci una temperatura in Celsius\n");
    scanf("%f", &x);
    if (x < -273.15)
    {
      printf("Error\n");  
    }
    else
    {
    printf("La temperatura in Fahrenheit è:%f\n", x * (9/5) + 32);
    printf("La temperatura in Kelvin é:%f\n", x + 273.15);
    }
    
    return(0);

}
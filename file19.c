#include <stdio.h>

void stampaciao()
{
    printf("Ciao\n");
}

void stampacubo()
{
    int x;
    stampaciao();
    printf("Inserisci un numero\n");
    scanf("%d", &x);
    int z=x*x*x;
    printf("Il cubo di %d è %d\n", x, z);

}
int main()
{
    stampacubo();
    stampaciao();
    stampacubo();
    stampaciao();
    stampacubo();
    stampaciao();
    stampacubo();

    return(0);
}
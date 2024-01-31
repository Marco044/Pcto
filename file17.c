#include <stdio.h>

int main()
{
    int x=0;
    float y=0;
    float z=0;
    while (x>=0)
    {
        printf("Inserisci un numero:\n");
        scanf("%d", &x);
        y=y+x;
        z=z+1;
        if (x>=0)
        {
             printf("Media:%f\n", y/z);
        }
    }
    
    return(0);

}
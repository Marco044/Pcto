#include <stdio.h>
int main(void)
{

    int scelta;
    printf("Scegli il tuo genere preferito\n");
    printf("1. Rap/Trap\n");
    printf("2. Rock\n");
    printf("3. Metal\n");
    printf("4. Techno\n");
    printf("5. Pop\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    scanf("%d",&scelta); 
    getchar();
    switch(scelta)
    {
        case 1:
            printf(".\n");
            break;
        case 2:
            printf(".\n");
            break;
        case 3:
            printf(".\n");
            break;
        case 4:
            printf(".\n");
            break;
        case 5:
            printf(".\n");
            break;
        case 0: 
            printf("Fine sessione.\n");
            break;
        default: 
            printf("Scelta non consentita.\n"); 
            break;
    }
    return 0;
}
#include <stdio.h>

void questionario()
{
    int e;
    char regione[100];
    printf("Per iniziare rispondi a questo breve questionario:\n");
    printf("Quanti anni hai?\n");
    scanf(" %d", &e);
    printf("In che regione vivi?\n");
    scanf(" %s", regione);
    int scelta;
    printf("Scegli il tuo genere musicale preferito\n");
    printf("1. Rap/Trap\n");
    printf("2. Rock\n");
    printf("3. Metal\n");
    printf("4. Techno\n");
    printf("5. Pop\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    scanf(" %d",&scelta); 
    getchar();
    switch(scelta)
    {
        case 1:
            printf("loading...\n");
            sleep(5);
            printf("loading...\n\nOra ti consiglieremo alcuni eventi musicali\n");
            break;
        case 2:
            printf("loading...\n\nOra ti consiglieremo alcuni eventi musicali\n");
            break;
        case 3:
            printf("loading...\n\nOra ti consiglieremo alcuni eventi musicali\n");
            break;
        case 4:
            printf("loading...\n\nOra ti consiglieremo alcuni eventi musicali\n");
            break;
        case 5:
            printf("loading...\n\nOra ti consiglieremo alcuni eventi musicali\n");
            break;
        case 0: 
            printf("Fine sessione.\n");
            break;
        default: 
            printf("Scelta non consentita.\n"); 
            break;

    }
    if (scelta==1)
    {
        
    }
    

}


int main()
{
    printf("Ti diamo il benvenuto a Music BCL, la migliore app per trovare eventi musicali\n\n");
    questionario(); 
    return 0;
}
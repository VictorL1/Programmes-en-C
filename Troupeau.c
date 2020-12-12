#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbV=10, nbM=100, PrixV=250, PrixM=100;
    printf("Ce programme permet de calculer la valeur d'un troupeau\n");
    printf("Entrer le nombre de vaches: ");
    scanf("%d", &nbV);
    printf("Entrer le prix d'une vache: ");
    scanf("%d", &PrixV);
    printf("Entrer le nombre de moutons: ");
    scanf("%d", &nbM);
    printf("Entrer le prix d'un mouton: ");
    scanf("%d", &PrixM);
    printf("Le prix des %d vaches: %d euros\n", nbV, nbV*PrixV);
    printf("Le prix des %d moutons: %d euros\n", nbM, nbM*PrixM);
    printf("La valeur du troupeau: %d euros\n", nbV*PrixV+nbM*PrixM);
    return 0;
}

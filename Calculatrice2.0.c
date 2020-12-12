#include <stdio.h>
#include <stdlib.h>

int main()
{
    float addition(float, float);
    float soustraction(float, float);
    float multiplication(float, float);
    float division(float, float);
    float multiplication(float, float);
    float minimum(float, float);
    float maximum(float, float);
    float puissance(float, float);
    float n1, n2;
    char signe;
    affichemenu();
    scanf(" %c", &signe);
    while(signe !='Q')
    {
        printf("Veuillez saisir les deux operandes :\n");
        scanf("%f %f", &n1, &n2);
        switch(signe)
        {
        case '+' :
            printf("La somme des deux nombres fait : %.2f + %.2f = %.2f\n",n1, n2,addition(n1,n2) );
            break;
        case '-':
            printf("La soustraction des deux nombres fait : %.2f - %.2f = %.2f\n", n1, n2,soustraction(n1,n2));
            break;
        case '/':
            if(n2 == 0)
                printf("Division par 0 impossible\n");
            else
            printf("La division des deux nombre fait : %.2f / %.2f = %.2f\n", n1, n2, division(n1,n2));
            break;
        case '*':
            printf("Le produit des deux nombres fait : %.2f * %.2f = %.2f\n", n1, n2, multiplication(n1,n2));
            break;
        case 'm':
            printf("Le minimum des deux nombres est %.2f\n", minimum(n1,n2));
            break;
        case 'M':
            printf("Le maximum des deux nombres est %.2f\n", maximum(n1,n2));
            break;
        case'P':
            printf("Le nombre %.2f a la puissance %.2f fait %.2f\n",n1, n2, puissance(n1,n2));
            break;
        default:
            printf("Erreur de saisie\n");
            break;
        }
        affichemenu();
        scanf(" %c", &signe);
    }
    return 0;
}

float addition(float a, float b)
{
    return a + b;
}

float soustraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a*b;
}

float division(float a, float b)
{
    return a / b;
}

float minimum(float a, float b)
{
    float res;
    if(a < b)
        res = a;
    else
        res = b;
    return res;
}

float maximum(float a, float b)
{
    float res;
    if(a > b)
        res = a;
    else
        res = b;
    return res;
}

float puissance(float a , float b)
{
    float res = 1;
    int i;
    for(i = 1;i<= b;i++)
        res = res * a;
    return res;
}

void affichemenu()
{
    printf("Menu principal Calculette\n");
    printf("+ : Addition\n");
    printf("- : Soustraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("m : Minimum\n");
    printf("M : Maximum\n");
    printf("P : Puissance\n");
    printf("Q : Quitter\n");
    printf("Choisir l operation :\n");
}

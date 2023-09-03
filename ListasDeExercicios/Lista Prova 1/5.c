#include <stdio.h>

int main()
{
    int codigo ;
    float peso , pesoplaneta ;

    printf("Para saber o seu peso em outro planeta digite seu peso: ");
    scanf("%f", &pesoplaneta);
    printf("Digite o código do planeta desejado.\n");
    printf("Mercúrio: código 1\n");
    printf("Vênus: código 2\n");
    printf("Marte: código 3\n");
    printf("Júpiter: código 4\n");
    printf("Saturno: código 5\n");
    printf("Urano: código 6\n");
    printf("\nCódigo: ");
    scanf("%d", &codigo);
    if(codigo > 0 && codigo <= 6)
    {
        switch(codigo)
        {
            case 1: peso = (pesoplaneta * 0.37) / 10 ;
            printf("Peso: %.2f\tPlaneta: Mercúrio \n", peso );
            break;
            
            case 2: peso = (pesoplaneta * 0.88) / 10 ;
            printf("Peso: %.2f\tPlaneta: Vênus \n", peso );
            break;

            case 3: peso = (pesoplaneta * 0.38) / 10 ;
            printf("Peso: %.2f\tPlaneta: Marte \n", peso );
            break;

            case 4: peso = (pesoplaneta * 2.64) / 10 ;
            printf("Peso: %.2f\tPlaneta: Júpiter \n", peso );
            break;

            case 5: peso = (pesoplaneta * 1.15) / 10 ;
            printf("Peso: %.2f\tPlaneta: Saturno \n", peso );
            break;

            case 6: peso = (pesoplaneta * 1.17) / 10 ;
            printf("Peso: %.2f\tPlaneta: Urano \n", peso );
            break;
        }
    }
    else
    {
        printf("Erro: O código digitado é inválido.\n");
    }

    return 0;

}
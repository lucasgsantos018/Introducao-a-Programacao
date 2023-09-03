#include <stdio.h>
#include <math.h>

int main()
{
    float maior , menor , numero1 , numero2 ;
    printf("Digite dois inteiros: \n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    if (numero1 > numero2)
    {
        printf("Quadrado do menor: %.2f \n", pow(numero2,2));
        printf("Raiz quadrada do maior: %.2f \n", sqrt(numero1));
    }
    else if (numero1 < numero2)
    {
        printf("Quadrado do menor: %.2f \n", pow(numero1,2));
        printf("Raiz quadrada do maior: %.2f \n", sqrt(numero2));
    }
    else
    {
        printf("Erro: Números iguais,a operação não foi efetuada. \n");
    }
    
    return 0;
}
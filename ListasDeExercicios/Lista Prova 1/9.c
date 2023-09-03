#include <stdio.h>
#include <math.h>

int main()
{
    float peso , altura , imc ;
    printf("Digite o peso(kg) e a altura(m) para saber o IMC.\n");
    scanf("%f", &peso);
    scanf("%f", &altura);
    
    imc = peso / (pow(altura,2));
    printf("IMC: %.2f\n", imc);
    return 0;
}
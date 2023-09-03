#include <stdio.h>

int main()
{
    int base , altura ;
    float area , perimetro ;
    printf("Digite o valor da base do triângulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura desse triângulo: "); scanf("%d", &altura);
    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    printf("Área: %.2f\t Perimetro: %.2f\n", area , perimetro);
    return 0;
}
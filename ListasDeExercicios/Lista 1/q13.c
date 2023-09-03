#include <stdio.h>
#include <math.h>

int main()
{
    float raio, comprimento , area , volume , pi = 3.14 ;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio ;
    area = pi * pow(raio, 2) ;
    volume = (4 / 3) * pi * pow(raio, 3);
    printf("Circuferência: %.2f\n", comprimento);
    printf("Área: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
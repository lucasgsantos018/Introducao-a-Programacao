#include <stdio.h>

int main()
{
    float a1 , an , n , r ;
    printf("Digite o primeiro termo: ");
    scanf("%f", &a1);
    printf("Digite a razão da PA: ");
    scanf("%f", &r);
    printf("Digite um número n: ");
    scanf("%f", &n);

    an = a1 + (n - 1) * (r);
    printf("Termo: %.1f\n", an);
    return 0;
}
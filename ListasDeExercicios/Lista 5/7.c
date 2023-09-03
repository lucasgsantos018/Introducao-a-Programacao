#include <stdio.h>

#define K 10

int main()
{
    double vetor[K], valores, vetorinvertido[K];
    printf("Digite 10 valores: ");
    for (int i = 0; i < K; i++)
    {
        scanf("%lf", &valores);
        vetor[i] = valores;
    }
    int j = 9;
    for (int i = 0; i < K; i++)
    {
        vetorinvertido[i] = vetor[j];
        j--;
    }
    for (int i = 0; i < K; i++)
    {
        printf("Para posição %d|Vetor original: %.2lf\tVetor invertido: %.2lf\n", i + 1, vetor[i], vetorinvertido[i]);
    }

    return 0;
}
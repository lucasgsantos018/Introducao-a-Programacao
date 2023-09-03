#include <stdio.h>

int main()
{

    float valores = 0;
    int K;
    printf("Digite a quantidade de valores para os vetores: ");
    scanf("%d", &K);
    float vetorA[K], vetorB[K], vetorC[K];
    printf("Digite %d valores para o vetor A: ", K);
    for (int i = 0; i < K; i++)
    {
        scanf("%f", &valores);
        vetorA[i] = valores;
    }
    valores = 0;
    printf("Digite os %d valores para o vetor B: ", K);
    for (int i = 0; i < K; i++)
    {
        scanf("%f", &valores);
        vetorB[i] = valores;
    }
    for (int i = 0; i < K; i++)
    {
        vetorC[i] += vetorA[i] + vetorB[i];
        printf("Para posição: %d | Soma do vetor A(%.2f) + vetor B(%.2f) = vetor C (%.2f)\n", i, vetorA[i], vetorB[i], vetorC[i]);
    }

    return 0;
}
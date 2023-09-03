#include <stdio.h>

#define K 20

int main()
{
    double vetor[K];
    double valores;
    printf("Digite os 20 valores: ");
    for(int i = 0;i < K;i++)
    {
        scanf("%lf", &valores);
        vetor[i] = valores;
        printf("Posição: %d,Vetor: %.2lf\n", i +1 , vetor[i]);
    }
    printf("\n");
    int j = K - 1 ;

    for(int i = 0;i < K ; i++)
    {
        if(i < K/2)
        {
            double aux1;
            aux1 = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux1;
        }    
        printf("Posição: %d, Vetor: %.2f\n", i + 1 , vetor[i]);
        j--;
    }
    return 0;
}
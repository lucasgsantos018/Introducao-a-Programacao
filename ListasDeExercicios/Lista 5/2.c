#include <stdio.h>


int main()
{
    int n , valor ;
    printf("Digite o número de posições: ");
    scanf("%d", &n);
    int vetor[n];
    printf("Digite os valores: ");
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &valor);
        vetor[i] = valor ;
    }
    int maior = vetor[0] , menor = vetor[0] ;
    for(int i = 1;i < n;i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("Maior = %d , Menor = %d \n", maior, menor );
    
    return 0;
}
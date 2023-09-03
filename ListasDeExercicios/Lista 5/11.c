#include <stdio.h>
#include <math.h>

int main()
{
    int n ;
    double soma = 0 , notas  ;
    printf("Digite o número de termos: ");
    scanf("%d", &n);
    const int tamanho = n;
    double vetor[n];
    for(int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor da nota: ");
        scanf("%lf", &notas);
        vetor[i] = notas ;
    }

    for(int i = 0 ; i < tamanho ; i++)
    {
        soma += pow(vetor[i],2);
    }
    
    printf("Norma: %.2lf\n", sqrt(soma));
    return 0;
}


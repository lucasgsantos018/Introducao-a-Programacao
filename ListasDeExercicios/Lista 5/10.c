#include <stdio.h>
#include <math.h>

int main()
{
    int n ;
    double media = 0 , notas  ;
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
    double multiplica = vetor[0];
    for(int i = 1; i < tamanho ; i++)
    {
        multiplica *= vetor[i];
    }
    
    media = pow(multiplica,(1.0/tamanho)) ;
    printf("Média Geometrica: %.2lf\n", media);
    return 0;
}
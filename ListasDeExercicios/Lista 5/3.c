#include <stdio.h>

#define K 50

int main()
{
    int soma = 0 , vetor[K], valores ;
    printf("Digite 50 valores para saber a soma:\n");
    for(int i = 0;i < K;i++)
    {
        scanf("%d", &valores);
        vetor[i] = valores;
        soma += vetor[i];
    }
   
    printf("Soma = %d\n", soma);
    return 0;
}
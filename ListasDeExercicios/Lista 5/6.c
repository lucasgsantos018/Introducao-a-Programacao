#include <stdio.h>

#define temp 10
int main()
{
    double media = 0 , soma = 0, temperatura ;
    double vetor[temp];
    printf("Digite o valor da temperatura: ");
    for(int i = 0;i < temp ; i++)
    {
        printf("Digite o valor da temperatura,restam %d : ", temp - i  );
        scanf("%lf", &temperatura);
        vetor[i] = temperatura ;
        soma += vetor[i];
        
    }
    media = soma / temp ;
    printf("Media da temperatura: %.2lf\n", media);
    return 0;
}
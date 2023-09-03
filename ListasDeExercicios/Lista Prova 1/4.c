#include <stdio.h>

int main()
{
    float preco ;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    while (preco < 0)
    {
        printf("Preço inválido, digite novamente: ");
        scanf("%f", &preco);
    }

    if(preco >= 20.00)
    {
        printf("Valor de venda: R$%.2f \n", preco * 1.30);
    }
    else if (preco < 20)
    {
        printf("Valor de venda: R$%.2f \n", preco * 1.45);
    }
    return 0;
}
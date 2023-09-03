#include <stdio.h>

int main()
{
    int quarto, dias, taxa = 300;
    float preco;
    printf("Digite o número do quarto: ");
    scanf("%d", &quarto);
    printf("Digite o número de dias que ficará no hotel: ");
    scanf("%d", &dias);
    if (dias < 15)
    {
        preco = taxa * dias + 20 * dias;
    }
    else if (dias == 15)
    {
        preco = taxa * dias + 14 * dias;
    }
    else
    {
        preco = taxa * dias + 12 * dias;
    }
    printf("Número do quarto: %d\t Total a pagar: R$%.2f\n", quarto, preco);
    return 0;
}
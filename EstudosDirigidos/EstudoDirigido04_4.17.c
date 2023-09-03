
#include <stdio.h>

int main()
{
    int conta, lmtantigo, lmtatual, divida, i = 1;
    int conta1, lmtatual1;
    int conta2, lmtatual2;
    int conta3, lmtatual3;
    char resposta, resposta1, resposta2, resposta3;
    do
    {
        printf("----Cliente %d----\n\n", i);
        printf("Qual o número da sua conta? Digite a seguir: ");
        scanf("%d", &conta);
        printf("Qual seu limite de crédito antes da recessão? Digite a seguir: ");
        scanf("%d", &lmtantigo);
        printf("Qual o seu saldo de dívida atual? Digite a seguir: ");
        scanf("%d", &divida);
        printf("\n");

        lmtatual = lmtantigo / 2;

        if (lmtatual < divida)
            resposta = 'n';
        else
            resposta = 's';

        if (i == 1)
        {
            lmtatual1 = lmtatual;
            conta1 = conta;
            resposta1 = resposta;
        }

        if (i == 2)
        {
            lmtatual2 = lmtatual;
            conta2 = conta;
            resposta2 = resposta;
        }

        if (i == 3)
        {
            lmtatual3 = lmtatual;
            conta3 = conta;
            resposta3 = resposta;
        }

        i++;
    } while (i < 4);

    printf("Conta: %d \nLimite atual de crédito: %dR$\nSaldo positivo?: %c\n\n", conta1, lmtatual1, resposta1);
    printf("Conta: %d \nLimite atual de crédito: %dR$\nSaldo positivo?: %c\n\n", conta2, lmtatual2, resposta2);
    printf("Conta: %d \nLimite atual de crédito: %dR$\nSaldo positivo?: %c\n\n", conta3, lmtatual3, resposta3);

    return 0;
}
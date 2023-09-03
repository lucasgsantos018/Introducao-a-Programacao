#include <stdio.h>

int main()
{
    int impar = 0, media , valor1,valor2 ,contadorimpar = 0 ;

    double par = 1;
    printf("Digite o limite inferior(a): ");
    scanf("%d", &valor1);
    printf("Digite o limite superior(b): ");
    scanf("%d", &valor2);
    while(valor2 < valor1)
    {
        printf("O valor de b tem quer ser maior que a!\n");
        printf("Digite o limite superior(b): ");
        scanf("%d", &valor2);
    }
    for(int i = valor1 ;i <= valor2 ; i++)
    {
        if(i % 2 != 0)
        {
            impar += i;
            contadorimpar++;
        }
        else if(i % 2 == 0)
        {
            par *= i;
        }
    }
    media = impar / contadorimpar ;
    printf("Média dos ímpares: %d\n", media );
    printf("Produto dos pares: %.2lf \n", par);

    return 0;
}
#include <stdio.h>

int main()
{
    double x, y, resultado;
    char operador;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o operador ( + , - , * , /): ");
    scanf(" %c", &operador);
    printf("Digite o valor de y: ");
    scanf("%lf", &y);
    switch (operador)
    {
    case '+':
        resultado = x + y;
        break;

    case '-':
        resultado = x - y;
        break;

    case '*':
        resultado = x * y;
        break;

    case '/':
        resultado = x / y;
        break;
    }
    printf("Resultado de %.2lf %c %.2lf = %.2lf \n", x, operador, y, resultado);
    return 0;
}
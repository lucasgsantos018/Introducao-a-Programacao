#include <stdio.h>

int main()
{
    float fahrenheit , celsius ;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = ((9 * celsius) + 160) / 5;
    printf("Graus Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
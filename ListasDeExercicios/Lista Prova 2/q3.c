#include <stdio.h>

int main()
{
    float celsius ;
    for (int i = 50; i <= 150 ; i++)
    {
        celsius = 5.0 / 9.0 * (i - 32) ;
        printf("Fahrenheit: %d\tCelsius: %.2f\n", i , celsius);
    }
    return 0;
}
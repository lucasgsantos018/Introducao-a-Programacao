/*Prática 5 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

void converterCelsius(float celsius,float *fahrenheit, float *kelvin);

void converterCelsius(float celsius,float *fahrenheit, float *kelvin){
   *fahrenheit =  celsius * 9 / 5 + 32;
   *kelvin = celsius + 273.15;
}

int main(){
    float celsius , fahrenheit , kelvin ;
    printf("Digite o valor em celsius:\n"); 
    scanf("%f", &celsius);

    converterCelsius(celsius , &fahrenheit , &kelvin );
    printf("Fahrenheit = %.4f\n", fahrenheit);
    printf("Kelvin = %.4f\n", kelvin);
    
    return 0;
}



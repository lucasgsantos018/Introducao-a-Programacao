/*Estudo Dirigido 3 questao 5
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double soma(double , double);
double subtracao(double , double);
double multiplicacao(double , double);
double divisao(double , double);
double potencia(double , double);


double soma(double primeiro , double segundo ){
    return primeiro + segundo;
}

double subtracao(double primeiro , double segundo){
    return primeiro - segundo;
}

double multiplicacao(double primeiro , double segundo){
    return primeiro * segundo;
}

double divisao(double primeiro , double segundo){
    if (segundo != 0){
        return primeiro / segundo;
    }
    else 
    printf("\nErro: Divisão por 0\n");
    exit (-1);
}

double potencia(double primeiro , double segundo){
    return pow(primeiro , segundo);
}


int main(){
    double x , y , resultado;
    char operando;
    printf("\nDigite o primeiro valor: "); scanf("%lf", &x);
    printf("\nDigite o segundo valor: "); scanf("%lf", &y);
    printf("\nInforme o operando ( + , - , * , / , ^ ): "); scanf(" %c", &operando);
    
    switch (operando){
        case '+':
        resultado = soma(x , y);
        break;

        case '-':
        resultado = subtracao(x , y);
        break;
        
        case '*':
        resultado = multiplicacao(x , y);
        break;

        case '/':
        resultado = divisao(x , y);
        break;

        case '^':
        resultado = potencia(x , y);
        break;

        default:
        printf("Operando inválido.\n");

    }
    printf(" %.2lf %c %.2lf = %.2lf\n", x , operando , y , resultado);
    return 0;




}
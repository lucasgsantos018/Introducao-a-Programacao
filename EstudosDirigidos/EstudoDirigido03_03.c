/*Estudo Dirigido 3 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

double realToDolar(double , double);

int main(){
    double real , cotacao , dolar ;
    printf("DIgite o valor em real:\n"); scanf("%lf", &real);
    printf("Digite o valor de cotação do dólar:\n"); scanf("%lf", &cotacao);
    
    dolar = realToDolar(real , cotacao);
    printf("O valor convertido é: %.2lf\n", dolar);
    return 0;
}

double realToDolar(double real , double cotacao){
    return real / cotacao;
}

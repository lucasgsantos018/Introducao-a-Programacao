/*Estudo Dirigido 3 questao 4
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

double comissao(double venda);

double comissao(double venda){
    double salario;
    if (venda < 2500.00){
        salario = 0.15 * venda;
        return salario ;
    }
    else if (venda > 5000.00){
        salario = 0.25 * venda;
        return salario ;
    }
    else {
        salario = 0.20 * venda;
        return salario ;
    }
}

int main(){
    double venda , total;
    printf("Digite o valor total das vendas:\n"); scanf("%lf", &venda);
    total = comissao(venda);
    printf("O valor da comissao eh: %.2lf\n", total);
    return 0;
}
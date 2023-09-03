/*Pratica 6 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

long long fat(int n);

long long fat(int n)
{
    long long s = 1;
    int i = 1;
    while(i <= n)
    {
        s *= i;
        i++;
    }
    return s;
    
}

int main(){
    int n ;
    long long result ;

    printf("\nDigite o valor de N para receber o seu fatorial: ");
    scanf("%d", &n);

    result = fat(n);
    printf("%d! = %lld\n", n , result);
    
    return 0;
}
/*Estudo Dirigido 2 questao 9
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>

int main()
{
  float k, m, x, F;
  printf("Constante elastica:\n ");
  scanf("%f", &k);
  printf("Massa:\n ");
  scanf("%f", &m);
  printf("Posicao inicial:\n ");
  scanf("%f", &x);

  F = k * x;

  printf("A aceleracao eh %.3f\n", F / m);

  return 0;
}
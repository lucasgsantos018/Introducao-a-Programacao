/*Estudo Dirigido 2 questao 8
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float t, s, v, g;
  g = 9.807;
  printf("tempo:\n");
  scanf("%f", &t);
  s = ( g * pow(t, 2)) / 2;
  v = t * g;

  printf("A velocidade eh %.3f e a distancia eh %.3f\n", v , s);

  return 0;
}
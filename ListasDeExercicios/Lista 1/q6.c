#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1 , x2 , y2 , dist;
    printf("\nPara saber a distância entre os pontos p1 e p2:\n");
    printf("\nDigite o x do ponto 1: \n"); scanf("%f", &x1);
    printf("Digite o y do ponto 1: \n"); scanf("%f", &y1);
    printf("Digite o x do ponto 2: \n"); scanf("%f", &x2);
    printf("Digite o y do ponto 2: \n"); scanf("%f", &y2);
    
    dist = sqrt((pow((x2 - x1),2) + pow((y2 - y1), 2)));
    printf("A distância entre os dois pontos eh: %.2f\n", dist);
    return 0;
}


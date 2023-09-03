#include <stdio.h>
#include <math.h>

int main()
{
    int l1 , l2;
    float hip ;
    printf("Digite o valor do lado 1 do triângulo: "); scanf("%d", &l1);
    printf("Digite o valor do lado 2 do triãngulo: "); scanf("%d", &l2);

    hip = sqrt((pow(l1,2)) + (pow(l2,2)));
    printf("Hiportenusa : %.3f\n", hip);
    return 0;
}
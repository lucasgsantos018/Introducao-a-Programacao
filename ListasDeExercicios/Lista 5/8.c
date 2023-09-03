#include <stdio.h>

#define K 10

int main()
{
    int vetorpar[K],vetorimpar[K], valor ;
    int par = 0, impar = 0;
    printf("Digite 10 valores inteiros: \n");
    for(int i = 0;i < K;i++)
    {
        int par = 0,impar = 0;
        
        scanf("%d", &valor);
        if(valor % 2 == 0)
        {
            vetorpar[i] = valor;
            par++;
        }
        if(valor % 2 != 0)
        {
            vetorimpar[i] = valor;
            impar++;
        }

        if(impar == 1)
        {
            printf("Posição: %d|Vetor impar: %d\n", i + 1, vetorimpar[i]);
        }
        if(par == 1)
        {
            printf("Posição: %d|Vetor par: %d\n", i +1 , vetorpar[i]);
            
        }
    
    }
    return 0;

}
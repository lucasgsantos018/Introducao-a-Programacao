#include <stdio.h>

#define K 100

int main()
{
    int vetor[K];
    for(int i = 0; i < K;i++)
    {
        vetor[i] = i + 1 ;
    }

    printf("%d", vetor[10]);
    return 0;
}
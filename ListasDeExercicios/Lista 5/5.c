#include <stdio.h>

#define K 50

int main()
{
    int vetor[K];

    for (int i = 0; i < K; i++)
    {

        int i2 = i * 2;
        vetor[i] = i2;
    }

    return 0;
}
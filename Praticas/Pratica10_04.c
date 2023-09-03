/*Pratica 10 questao 4
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>
void toUpper(char *minusculas, int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        if (minusculas[i] >= 'a' && minusculas[i] <= 'z')
        {
            minusculas[i] -= 32;
        }
    }
}

int main()
{
    char minusculas[100];
    printf("Digite o texto: ");
    fgets(minusculas, 100, stdin);
    int tam = strlen(minusculas);
    minusculas[tam - 1] = '\0';
    toUpper(minusculas, tam);
    printf("%s\n", minusculas);
    return 0;
}
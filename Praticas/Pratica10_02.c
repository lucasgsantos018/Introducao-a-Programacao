/*Pratica 10 questao 2
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[70];
    printf("Digite o nome completo: ");
    fgets(nome, 70, stdin);
    int tam = strlen(nome), letras = 0;
    nome[tam - 1] = '\0';
    for (int i = 0; i <= tam - 1; i++)
    {
        if (nome[i] != ' ' && '\0')
        {
            letras++;
        }
        
    }
}

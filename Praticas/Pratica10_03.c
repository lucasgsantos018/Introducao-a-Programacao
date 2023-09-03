/*Pratica 10 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char censura[200];
    printf("Digite o texto para censurar: ");
    fgets(censura,200,stdin);
    int tam = strlen(censura) ;
    censura[tam -1] = '\0';

    for(int i = 0 ; i < tam - 1 ; i++)
    {
        if(censura[i] == 'a')
        {
            censura[i] = '@';
        }
        else if(censura[i] == 'e')
        {
            censura[i] = '_';
        }
        else if(censura[i] == 'i')
        {
            censura[i] = '|';
        }
        else if(censura[i] == 'o')
        {
            censura[i] = '0';
        }
        else if(censura[i] == 'u')
        {
            censura[i] = '#';
        }
        else if(censura[i] == 's')
        {
            censura[i] = '$';
        }
        
    }
    printf("%s\n", censura);
    return 0;
}
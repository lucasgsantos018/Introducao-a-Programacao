/*Pratica 10 questao 1
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palindromo[100] , inverter[100] ;
    int i;
    int j;


    while (strcmp(palindromo, "FIM") != 0)
    {
        printf("Digite uma palavra ou fim para sair: ");
        fgets(palindromo, 99, stdin);
        int tam = strlen(palindromo);
        palindromo[tam - 1] = '\0';
        i = 0;
        j = tam -2;
        if(strcmp(palindromo , "FIM") != 0)
        {
            while(i <= tam - 2)
            {
                inverter[i] = palindromo[j];
                i++;
                j--;
                
            }
            
            if(strcmp(palindromo,inverter) == 0)
            {
                printf("É palindromo!!\n");
            }
            else
            {
                printf("Não é palindromo!!\n");
            }

        }

    }
    
    return 0;
}
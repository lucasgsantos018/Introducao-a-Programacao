#include <stdio.h>

int main()
{
    int idade ;
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    
    if(idade < 16)
    {
        printf("\nNão-eleitor.\n");
    }
    else if(idade >= 16 && idade < 18 || idade > 65)
    {
        printf("\nEleitor facultativo\n");
    }
    else 
    {
        printf("\nEleitor obrigatório.\n");
    }
    return 0;
}
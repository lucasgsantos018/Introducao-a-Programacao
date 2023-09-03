#include <stdio.h>

int main()
{
    char carac;
    printf("Digite o caractere: ");
    scanf("%c", &carac);

    if(carac >= 65 && carac <= 90)
    {
        printf("Letra maiuscula.\n");
    }
    else if(carac >= 97 && carac <= 122)
    {
        printf("Letra minúscula.\n");
    }
    else
    {
        printf("Não é uma letra maiúscula nem minúscula.\n");
    }    
    return 0;
}
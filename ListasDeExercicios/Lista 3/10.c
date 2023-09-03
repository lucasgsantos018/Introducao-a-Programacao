#include <stdio.h>

int main()
{
    char sexo;
    float altura , alturafeminina = 0 ;
    int contmasculino = 0 , contfeminino = 0 ;
    
    for(int i = 1 ;i <= 3;i++)
    {
        printf("Digite o sexo (M ou F): ");
        scanf(" %c", &sexo);

        if(sexo == 'M' || sexo == 'm')
        {
            contmasculino++;
        }
        else if(sexo == 'F' || sexo == 'f')
        {
            alturafeminina += altura;
            contfeminino++;
        }
        
    }
    float maior = 0 , menor = 1000000;
    for(int i = 1;i <= 3;i++)
    {
        printf("Digite a altura em metros: ");
        scanf("%f", &altura);
        
        if(menor > altura )
            {
                menor = altura;
            }
        if(altura > maior)
            {
                maior = altura;
            }

    }
    printf("Maior altura: %.2fm\tMenor altura: %.2fm\n", maior , menor );
    printf("Média da altura das mulheres: %.2fm\n", alturafeminina / (float)(contfeminino));
    printf("Número de homens: %d\n", contmasculino);
    return 0;
}
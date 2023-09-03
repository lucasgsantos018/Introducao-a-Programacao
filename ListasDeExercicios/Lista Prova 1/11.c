#include <stdio.h>

int main()
{
    int ano, A , B , C , D , E , F , G , H , I , K , L , M , Mes , Dia ;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    A = ano % 19 ;
    B = ano / 100;
    C = ano % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = ((19 * A) + B - D - G + 15) % 30 ;
    I = C/4;
    K = C%4;
    L = (32 + (2 * E) + (2 * I) - H - K) % 7;
    M = (A + (11 * H) + (22 * L)) / 451 ; 
    Mes = (H + L - (7 * M) + 114) / 31 ;
    Dia = (H + L - (7 * M) + 114) % 31 + 1; 

    int sextasanta = Dia - 2 ;
    int carnavaldia = Dia + 14;
    int carnavalmes = Mes - 2 ;
    if(carnavaldia > 31)
    {
        carnavalmes += 1 ;
        carnavaldia -= 30;
    }
    int corpuschristi = Mes + 2 ;

    printf("Páscoa ->\t\t mês: %d\t dia: %d \n", Mes , Dia );
    printf("Sexta-Feira santa ->\t mês: %d\t dia: %d\n", Mes , sextasanta);
    printf("Carnaval ->  \t\t mês: %d\t dia: %d \n", carnavalmes , carnavaldia);
    printf("Corpus Christi ->  \t mês: %d\t dia: %d \n", corpuschristi , Dia);
    return 0;
    
}
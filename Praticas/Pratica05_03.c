/*Prática 5 questao 3
/ Lucas Gomes dos Santos
/ Matricula 20.1.4108
/ Turma 43
*/

#include <stdio.h>


int duracaominutos(int , int , int , int,int *minutostotais);

int duracaominutos(int horainicio, int horatermino,int minutosinicio,int minutostermino,int *minutostotais ){
    int conversaohora , conversaohoraa , conversaominutoum , conversaominutodois ;
    conversaohora = horainicio * 60;
    conversaominutoum = conversaohora + minutosinicio;
    conversaohoraa = horatermino * 60;
    conversaominutodois = conversaohoraa + minutostermino;

    if (horainicio <= horatermino){
        *minutostotais = conversaominutodois - conversaominutoum;
        return *minutostotais;
    }
    else {
        *minutostotais = (conversaominutodois + 1440) - conversaominutoum;
        return *minutostotais;
    }

}



int main(){
    int horainicio , horatermino , minutosinicio , minutostermino ;
    int minutostotais;
    printf("Digite a hora de início.\n"); scanf("%d", &horainicio);
    printf("Digite o minuto de início.\n"); scanf("%d", &minutosinicio);
    printf("Digite a hora de termino.\n"); scanf("%d", &horatermino);
    printf("Digite o minuto de termino.\n"); scanf("%d", &minutostermino);
    duracaominutos(horainicio, horatermino , minutosinicio , minutostermino , &minutostotais);
    printf("O tempo da partida é %d minutos\n", minutostotais);
    
    return 0;
    

}
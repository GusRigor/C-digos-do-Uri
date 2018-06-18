#include <stdio.h>
int main(){
    int Hi,Mi,Hf,Mf;
    int Hj, Mj;
    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);

    Hj=Hf-Hi;
    Mj=Mf-Mi;

    
    if(Hj<0){
        Hj=24+(Hf-Hi);
        
    }else if(Mj<0){
        Mj=60+(Mf-Mi);
        Hj--;
    } if(Hi==Hf && Mi==Mf){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        
    }else{
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Hj, Mj);}
}
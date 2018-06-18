#include<stdio.h>
int main(){
    int soma=0;
    double g;
    int i = 1;
    while(i<=6){
        scanf("%lf", &g);
        if(g>0.0){
            soma++;
        }
    i++;
    }
    printf("%d valores positivos\n", soma);
}    
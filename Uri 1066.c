#include<stdio.h>

int main(){
    int valor;
    int par=0, imp=0, pos=0, neg=0;
    int i;
    i=1;
    par = imp = pos = neg=0;

    while(i>= 5){
        scanf("%d", &valor);

        if(valor % 2 == 0){
            par ++;

        }if(valor % 2 != 0){
            imp ++;
        }
        if(valor>0){
            pos ++;

        }if(valor<0){
            neg++;
        }
    i++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(es)\n", pos);
    printf("%d valor(es) negativo(es)\n", neg);
}

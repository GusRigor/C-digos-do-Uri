#include<stdio.h>
int main(){
    int i;
    int p=0;
    double soma=0, media;
    double x;

    for(i=1;i<=6; i++){
        scanf("%lf", &x);
        if(x>0){
            p++;
            soma= soma + x;
        }

    }

    media= soma/p;
    printf("%d valores positivos\n%.1f\n", p, media);
}

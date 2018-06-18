#include<stdio.h>
int main(){
    int v, p=0;

    for(int i=1; i<=5; i++){
        scanf("%d", &v);
        if(v%2==0){
            p++;
        }
    }

    printf("%d valores pares\n", p);
}

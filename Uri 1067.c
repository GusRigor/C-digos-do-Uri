#include<stdio.h>
int main(){
    int x;
    int i;

    scanf("%d", &x);

    i=1;

    while(i <= x){
        if(i%2 != 0)
            printf("%d\n", i);

    i++;
    }
 }

#include<stdio.h>
int main(){
    int nrcaso, caso=1;
    int x;
    int in=0, out=0;

    scanf("%d", &nrcaso);

    while(caso<=nrcaso){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            in++;
        }else{
        out++;
        }
    caso++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);


}

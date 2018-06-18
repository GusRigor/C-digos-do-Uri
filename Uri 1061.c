#include<stdio.h>
int main(){
    int di, hi, mi, si;
    int df, hf, mf, sf;
    int dt, ht, mt, st;

    scanf("Dia %d",&di);
    scanf("%d : %d : %d", &hi, &mi, &si);
    scanf("Dia %d", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);

    dt = df - di;
    ht = hf - hi;
    mt = mf - mi;
    st = sf - si;

        if(st<0){
            st = 60 + (sf-si);
            mt--;
        }
        if(mt<0){
            mt = 60 + (mf-mi);
            ht--;
        }
        if(ht<0){
            ht = 24 + (hf-hi);
            dt--;
        }

    printf("%d dia(s)\n",dt);
    printf("%d hora(s)\n",ht);
    printf("%d minuto(s)\n",mt);
    printf("%d segundo(s)\n",st);


}


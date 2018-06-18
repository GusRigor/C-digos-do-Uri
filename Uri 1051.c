#include<stdio.h>

int main(){
    double sl, imp;
    scanf("%lf", &sl);

    if(sl<=2000.00)
        printf("Isento\n");
    
    else if(sl>=2000.01 && sl<=3000.00){
        imp= (sl-2000.00)*0.08;
        printf("R$ %.2f\n", imp);
    
    }else if(sl>=3000.01 && sl<=4500.00){
        imp= 80 + ((sl-3000.00)*0.18);
        printf("R$ %.2f\n", imp);
    
    }else{
        imp= 80 + 270 + ((sl-4500.00)*0.28);
        printf("R$ %.2f\n", imp);
    }
}

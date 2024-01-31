// 10) Scrivere un programma che presi in input una serie di n numeri
// con la virgola terminata da 9999, ne stampi a schermo la media

#include<stdio.h>

int main(){
    float i = 0, n = 0, s = 0;
    while (1){
        scanf("%f", &n);
        if(n == 9999){
            break;
        }
        if(n < 0){
            continue;
        }
        s += n;
        i++;
    }
    printf("La media e': %f", s/i);
}


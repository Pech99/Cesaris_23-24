#include<stdio.h>

int main(){
    int n = 0, s = 0, i = 0;

    while(i < 10){
        scanf("%d", &n);
        s += n;
        i++;
    } 

    printf("La somma e': %d", s);

}

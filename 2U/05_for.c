#include<stdio.h>

int main(){
    int n = 0, s = 0, i;

    for(i=0; i<10; i++){
        scanf("%d", &n);
        s += n;
    } 

    printf("La somma e': %d", s);

}

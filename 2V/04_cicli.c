#include<stdio.h>

int main(){
    int n, s = 0;

    int i = 0;
    while(i<10){
        scanf("%d", &n);
        s += n;
        i++;
    }

    printf("la somma e': %d", s);

}

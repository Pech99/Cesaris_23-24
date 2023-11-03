/*
    Scrivere un programma che presi in input 2 valori,
    Stampi a schermo il minimo dei 2.
*/

#include <stdio.h>

int main(){
    int a = 0, b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a<b){
        printf("%d", a);
    } else {
        printf("%d", b);
    }
}

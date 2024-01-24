// scrivere un programma che ricevuto in input un
// numero intero stampi a schermo se pari o dispari

#include<stdio.h>

int main(){
    int a;

    scanf("%d", &a);

//  if( (a/2)*2 != a ){
    if( a%2 == 0 ){
        printf("Pari");
    } else {
        printf("Dispari");
    }

    return 0;
}
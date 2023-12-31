/*
    Scrivere un programma che presi in input una serie di valori terminata da 0,
    Stampi a schermo sia il massimo che il minimo. (lo 0 dev'essere escluso)

    Esempio di sequenza:    56 -2 3 22 5 -6 7 -15 9 0
    Output Atteso:          Max: 56;    Min: -15;
*/

#include <stdio.h>

int main(){
    int a, max, min;
    
    scanf("%d", &a);
    max = a;
    min = a;

    while(a!=0){
        scanf("%d", &a);
        if (a==0){
            break;
        }
        
        if(a>max){
            max = a;
        }

        if(a<min){
            min = a;
        }
    }
    
    printf("Max: %d;\tMin: %d", max, min);
}

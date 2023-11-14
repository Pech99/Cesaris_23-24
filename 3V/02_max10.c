/*
    Scrivere un programma che presi in input 10 valori,
    Stampi a schermo il massimo dei 10.

    Esempio di input:   7 5 6 -6 0 -4 56 8 7 9 
    Output Atteso:      Max: 56;
*/

#include <stdio.h>

int main(){
    int a, max, i;
    scanf("%d", &max);

    for(i=0; i<9; i++){
        scanf("%d", &a);

        if(a>max){
            max = a;
        }
    }
    
    printf("Max: %d", max);
}

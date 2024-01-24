// scrivere un programma che efetui la somma di una
// serie di n valori terminata da 0.

// input:  1 2 3 4 5 0
// output: La somma e': 15

// input:  1 2 3 4 5 6 7 8 0
// output: La somma e': 36

// input:  2 2 2 2 2 2 2 0
// output: La somma e': 14

// input:  0
// output: La somma e': 0









#include<stdio.h>

int main(){
    int a, S = 0, i = 0;

    while(i<10){
        scanf("%d", &a);
        S += a;         // S = S + a;
        i++;            // i = i + 1;
    }

    printf("la somma e': %d", S);
}



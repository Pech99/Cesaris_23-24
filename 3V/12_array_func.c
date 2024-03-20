// 35) Creare un array di interi con 8 posizione e riempirlo con
// numeri casuali compresi tra 1 e 90  senza ripetizioni.
// Stampare man mano il contenuto dell’array.

#include <time.h>
#include <stdlib.h>
#include <stdio.h>


#define DIM 90

void fillRand(int *M, int d){
    int i = 0, rnd;
    srand(time(NULL));

    while (i<d) {
        rnd = (rand()%90)+1;
        if (isIn(M, i, rnd) == -1){
            M[i] = rnd;
            i++;
        }
    }
}

int isIn(int *A, int d, int n){
    int i;
    for (i=0; i<d; i++){
        if (A[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){

    int num[DIM], i = 0;

    fillRand(num, DIM);

    printf("[ ");
    for (i=0; i<DIM; i++){
        printf("%d ", num[i]);
    }
    printf("]");

}

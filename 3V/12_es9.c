// 9) Creare un array di interi con 10 posti, inserire zeri in tutte le celle;
// leggere in che posizione inserire un 1 e inserirlo nella corretta posizione
// dell’array; scandire l’array una cella alla volta fermandosi quando si trova l’uno,
// dire in che cella è stato trovato.

#include <stdio.h>

#define DIM 10

int main(){
    int n[DIM], pos, i;

    for (i=0; i<DIM; i++){
        n[i]=0;
    }

    printf("Inserisci la posizione: ");
    scanf("%d", &pos);
    n[pos]=1;

    for (i=0; i<DIM; i++){
        if(n[i]==1){
            printf("La posizione e' %d\n\n", i);
            break;
        }
    }

    printf("[ ");
    for (i=0; i<DIM; i++){
        printf("%d ", n[i]);
    }
    printf("]");

}



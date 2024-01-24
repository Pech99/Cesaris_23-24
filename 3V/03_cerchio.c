/*
    Scrivere un programma che preso in input
    il raggio, stampi un cerchio di '*'.
    (HINT: un punto è interno ad un cerchio se la
    sua distanza dal cento è minore del raggio.
    potrebbe servire la funzione sqrt(x)
    presente nella libreria math.h)
*/

#include <stdio.h>
#include <math.h>

int main(){
    int r, i, j;
    scanf("%d", &r);

    for(i=-r; i<r; i++){
        for(j=-r; j<r; j++){
            if( sqrt( (i*i)+(j*j) ) < r ){
                printf("##");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }
}
/*
    12)	Scrivere una funzione che scambia il valore
    di due variabili presenti nel main.
*/

#include<stdio.h>

void scambio(int *A, int *B){
    int app;
    app = *A;
    *A = *B;
    *B = app;
}

int main(){
    int a = 3, b = 2;
    printf("Prima della chiamata:\ta=%d, b=%d\n", a, b);
    scambio(&a, &b);
    printf("Dopo la chiamata:\ta=%d, b=%d\n", a, b);
}

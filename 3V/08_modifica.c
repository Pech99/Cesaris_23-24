/*
    11)	Scrivere una funzione che modifica il contenuto
    di due variabili presenti nel main.
*/

#include<stdio.h>

void modifica(int *i, int *j){
    *i = (*i)*(*j)+8;
    *j = 10;
}

int main(){
    int a = 3, b = 2;

    printf("Prima della chiamata:\ta=%d, b=%d\n", a, b);
    printf("Puntatori:\t\ta=%d, b=%d\n", &a, &b);

    modifica(&a, &b);

    printf("Dopo la chiamata:\ta=%d, b=%d\n", a, b);

}





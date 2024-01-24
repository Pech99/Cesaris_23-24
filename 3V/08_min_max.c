/*
    13)	Scrivere una funzione che calcola il massimo
    ed il minimo di 3 valori passati come parametri.
*/

#include<stdio.h>

void minMax(int a, int b, int c, int *min, int *max){
    if (a>=b && a>=c){
        *max = a;
    } else if (b>=a && b>=c) {
        *max = b;
    } else {
        *max = c;
    }

    if (a<=b && a<=c){
        *min = a;
    } else if (b<=a && b<=c) {
        *min = b;
    } else {
        *min = c;
    }
}

int main(){
    int a, b, c;
    int min, max;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    minMax(a, b, c, &min, &max);
    printf("min=%d, max=%d\n", min, max);
}

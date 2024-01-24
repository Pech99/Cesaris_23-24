#include<stdio.h>

int main(){
    int n = 1, cont = 0;

    while(n!=0){
        scanf("%d", &n);
        if (n == 5){
            cont++;
        }
    }

    printf("nella sequenza sono presenti %d valori uguali a 5", cont);
}




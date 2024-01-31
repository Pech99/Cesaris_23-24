#include<stdio.h>

int fattoriale(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return fattoriale(n-1)*n;
}

int main(){
    int a;
    scanf("%d", &a);
    a = fattoriale(a);
    printf("Il fattoriale e': %d", a);
}

#include <stdio.h>

int isPrime(/*argomeenti*/){
    return 0;
}

int main(){

    int div, n;
    scanf("%d", &n);

    if (!isPrime(n, &div)) {
        printf("Il numero non e' primo il divisore comune e': %d", div);
    }

}
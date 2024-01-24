#include<stdio.h>

int main(){
    int a, b, min;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a<b){
        min = a;
    } else {
        min = b;
    }

    printf("Il minimo e': %d", min);
}
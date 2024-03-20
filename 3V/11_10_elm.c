#include <stdio.h>

#define DIM 10

int main(){
    int a, i = 0;
    int n[DIM];

    for(i=0; i<DIM; i++){
        scanf("%d", &n[i]);
    }

    scanf("%d", &a);

    for(i=DIM-1; i>=0; i--){
        if(n[i]==a){
            break;
        }
    }

    printf("%d", i);
}
#include <stdio.h>
#include <math.h>

int main(){
    int i, j, I, J;
    scanf("%d", &I);
    scanf("%d", &J);


    for(i=0; i<I; i++){
        for(j=0; j<J; j++){
            if(j<(float)i/I*J){
                printf("##");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }
}
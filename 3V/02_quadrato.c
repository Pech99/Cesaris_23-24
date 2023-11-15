/*
    Stampare un quadrato di '#' di lato preso in input
    n = 5;
    #####  |
    #####  |
    #####  | n
    #####  |
    #####  |
*/

#include <stdio.h>

int main(){
    int a, i, j;
    scanf("%d", &a);

    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            printf("#");
        }
        printf("\n");
    }
}
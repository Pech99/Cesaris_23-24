/*
    Stampare un rombo di '+' di dimensone n presa in input
    n = 5;
        |   +
        |  +++
      n | +++++
        |  +++
        |   +
*/

#include <stdio.h>

int main(){
    int a, i, j;
    scanf("%d", &a);

    for(i=0; i<a; i++){
        for(j=0; j<a; j++){
            if((a-i<=j+1+a/2) && (i<=j+a/2) && (a-i>=j+1-a/2) && (i>=j-a/2)){
                printf("+");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }
}
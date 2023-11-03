#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<b && a<c){
        printf("%d", a);
    } else if(b<a && b<c){
        printf("%d", b);
    } else {
        printf("%d", c);
    }
}


# include <stdio.h>

int assoluto( int a ){
    if (a<0){
        a*=-1;
    }
    return a;
}

int main(){
    int n, ab;

    scanf("%d", &n);

    ab = assoluto(n);

    printf("%d", ab);
}
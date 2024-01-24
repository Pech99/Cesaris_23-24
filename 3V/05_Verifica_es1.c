#include<stdio.h>

int main (){
    int a, b;

    scanf("%d", &a);
    b = a%10;
    a = a/10;
    printf("04 | int a, b;\t\t\ta=%d;\tb=%d;\n", a, b);
    printf("05 |\n");
    
    a +=10;
    printf("06 | a +=10;\t\t\ta=%d;\tb=%d;\n", a, b);

    int c = a%(b+3);
    printf("07 | int c = a%%(b+3);\t\ta=%d;\tb=%d;\tc=%d;\n", a, b, c);

    int d = (c%9)+1;
    printf("08 | int d = (c%%9)+1;\t\ta=%d;\tb=%d;\tc=%d;\td=%d;\n", a, b, c, d);

    d *= 9;
    printf("09 | d *= 9;\t\t\ta=%d;\tb=%d;\tc=%d;\td=%d;\n", a, b, c, d);

    int e =  d/10 + d%10;
    printf("10 | int e =  d/10 + d%%10;\ta=%d;\tb=%d;\tc=%d;\td=%d;\te=%d;\n", a, b, c, d, e);
}






/*
#include<stdio.h>

int main (){
    int a, b;
    scanf("%d", &a);
    a /= 10;
    b %= 10;

    a +=10;
    int c = a%(b+3);
    int d = (c%9)+1;
    d *= 9;
    int e =  d/10 + d%10;

    printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);
}


*/
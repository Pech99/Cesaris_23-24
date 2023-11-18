#include<stdio.h>
#include<math.h>

int main(){
    const float a = 0.0000000000667;        // Costante Fissa
    const float b = 6.67 * 0.00000000001;   // Moltiplicando per un peso
    const float c = 6.67 * pow(10, -11);    // Moltiplicadno per un peso ottentuo con la funzione potenza
    const float d = 6.67E-11;               // Notazione scientifica nativa di C e C++

    printf("a = %.13f\n", a);
    printf("b = %.13f\n", b);
    printf("c = %.13f\n", c);
    printf("d = %.13f\n", c);
}
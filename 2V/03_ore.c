// Scrivere un programma che preso in input un orario
// nel formato HH:MM:SS (Es. 12:47:30) ed una quantità
// intera di secondi (Es. 200) incrementi l'orario
// della quantità di secondi inserita dall'utente
// e stampi a schermo il nuovo orario.

// 12:47:30
// 200
// Output: 12:50:50




#include<stdio.h>

int main(){
    int o, m, s, sadd;

    scanf("%d:%d:%d", &o, &m, &s);
    scanf("%d", &sadd);

    sadd += s + m*60 + o*3600;

    o = sadd / 3600;
    s = sadd % 60;
    m = sadd /60 - o*60;

    printf("%d:%d:%d", o, m, s);

}

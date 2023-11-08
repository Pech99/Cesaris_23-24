/*
    Questo fle contiene odice probabilmente non funznanante
    al fine di ripassare i concetti delle programmazione imperativa
    appresi lo scorso anno scolastico.
*/

                                // DIRETTIVE E LIBRERIE
                                // Tutte le istruzioni che iniziano con # sono direttive per il precompilatore.
#include <stdio.h>              // Questa istruzione consente di importare le librerie
                                // In particolare verrà sostituita dal codice presente nel file stdio.h

#define MAX 10                  // Questa direttiva permette di definire delle macro: ogni qualvolta nel
                                // codice sarà presente la paroala chiave "MAX", questa verrà sostituita
                                // dal precompilatore con il valore 10.

                                // IL MAIN
int main(){                     // La funzione main è l'entry point del programma;
                                // la prima funzione che viene eseguita.

                                // LE VARIABILI
                                // Come ogni linguaggio ci programmazione, anche in C è possibile dichiarare
                                // delle variabili. Ogni variabile deve avere necessariamente un tipo definito.
    int a;                      // il tipo int rappresenta tipi di dati interi
    float b;                    // il tipo float rappresneta tipi di dati decimali in virgola mobile.
    char c;                     // il tipo char rappresneta singoli caratteri appartenenti alla tabella ASHII.
                                // in altri linguaggi esistono anche tipi
                                // bool, possono assumere o Vero o Falso
                                // string, rappresnetano una sequenza di caratteri
                                // questi tipi di variabili non esisistono in C,
                                // ma è possibile comunque rappresentare questr categorie di valori.
    
                                // Sulle variabili è possibile fare operazioni ed assengamenti,
                                // al fine di mutarne i valori in esse contenuti.
                                // le più comuni sono le operazioni matematiche: +, *, -, /, %.
                                // seguono alcuni esempi.
    a = 0;                      // assega ad a 0.
    a += 5;                     // somma ad a 5.
    a++;                        // incrementa a di 1.
    a--;                        // decrementa a di 1.
    a = a % 2;                  // assegno ad a il resto delle divisione intera per 2.

    const float p = 3.14;       // in C è anche possibile dichiarare delle costanti alle
                                // quali non è possibile cambiare il valore una volta definito.

                                // INPUT/OUTPUT
                                // per efetuare le tipiche funzioni di input/output
                                // si usano le funzioni delle libreria stdio.h
    scanf("%d", &a);            // La funzione scanf() si occupa di prendere in input dati dalla tastiera.
                                // Accetta una stringa di formato, e della variabili a cui 
                                // assengare i valori che corrispondono al formato.
    printf("%d", a);            // La funzione printf() si oppupa di stampare a schermo i dati.
                                // Accetta anch'essa una stringa di formato ed una serie di variabili.
                                // la stringa di formato può ctenere dei "verbi", ovvero dei segnaposto
                                // che verranno sostituiti con il valore contenuto nelle variaili.
                                // https://copyprogramming.com/howto/printf-d-a-a-2-3-code-example

                                // STRUTTURE DI CONTROLLO: la selezione
    if (/*condizione*/) {       // Si occupa di eseguire o meno blocchi di codice,
        // Codice A             // dipendentemente da una condizione, che dev'essere o vera o falsa.
    } else {                    // Se la condizione è vera, verrà eseguito il blocci di codice A,
        // Codice B             // altrimenti il blocco di codice B.
    }                           // Il costrutto else, può essere omesso o concatenato direttamente con un altro if.

                                // STRUTTURE DI CONTROLLO: I cicli
                                // I cicli si occupano di eseguire blocchi di codice fintanto che
    while(/*condizione*/){      // la loro condizione sia vera. Ogni ripetizione del cilo è detta iterazione.
                                // I cicli hanno delle ulteriori istruzuoni di controllo: break e continue.                 
        break;                  // Interrompe il ciclo prematuramente, passando all'esecuzione dell'istruzuone
                                // immediatamente fuori dal ciclo.
        continue;               // interrompe l'esecuzione del blocco di codice,
                                // tornando a valitare la condizione del ciclo.
    }

                                // Esisitono differenti tipi di cliclo, l'esempio sopra è un ciclo while,
                                // che controlla la sua condizione all'inizio di ogni iterazione.
                                // Il corpo di questo ciclo può essere eseguito da 0 ad N volte.

    do {                        // il ciclo do-while controlla la sua condizione alla fine di ogni iterazione.
        // Codice               // Il corpo di questo ciclo viene eseguito almeno una volta,
    } while(/*condizione*/);    // quindi compie da 1 a N iterazioni.

    for(/*I1*/; /*C*/; /*I2*/){ // il ciclo for è pensato per eseguire un pezzo di codice
        // Codice               // per un numero definito di volte. La sua intestazione accetta 3 costrutti:
    }                           // I1: è un istruzione che viene eseguita prima della prima iterazione
                                // C: è la condizione che dev'essere vera affinchè il ciclo continui
                                // I2: è un istruzione che viene eseguita alla fine di ogni iterazione.

    for(int i=0; i<MAX; i++){    // Questa è una tipica intestazione, dove si dichiara una variabile e la si azzera,
        // Codice               // alla fine di ogni iterazione la si incrementa e si controlla che il suo valore
    }                           // sia minore di 10. questo ciclo farà quindi 10 iterazioni, dove i varierà da 0 a 9.

    while(1){                   // Questo è un esempio particolare di condizione: essendo
    }                           // sempre vera i ciclo continuerà all'infinito.

                                // STRUTTURE DI CONTROLLO: Lo Switch
    switch (/*expr*/) {         // Permette di eseguire differenti blocchi di codice confrontando una
                                // singola variabile con dei valori costanti.
    case /*const1*/:            // expr: è la variabile di cui confrontare il contenuto.
                                // const1: è la condizione del determinato case. se la variabile è
        // Codice 1             // uguare a const1 allora verrà eseguito il blocco di codice 1.
                                // il break alla fine di ogni case è necessario, o verranno eseguiti
        break;                  // anche tutti i blocci di codice successivi a quello "vero".
    
    default:                    // il default, serve ad eseguire un blocco di codice,
        // Codice D             // nel caso nessun altro blocco sia stato eseguito.
    }

}

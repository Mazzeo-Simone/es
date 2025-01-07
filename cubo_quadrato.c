#include "dichiarazioni.h"
#include<stdio.h>

int main(void){
    int valore, scelta, risultato;
    printf("1. Cubo\n");
    printf("2. Quadrato\n");
    scanf("%d", &scelta);
    printf("Inserisci il valore\n");
    scanf("%d", &valore);
    if(scelta == 1){
        risultato = cubo(valore);
        printf("%d * %d * %d = %d\n", valore, valore, valore, risultato);
    } else if(scelta == 2) {
        risultato = quadrato(valore);
        printf("%d * %d = %d\n", valore, valore, risultato);
    } else {
        printf("Operazione non riconosciuta\n");
    }
    return 0;
}
#include <stdio.h>


int main(void) {
    int eingabe = 0, summe = 0, k = 0;
    
    while (1) {
        scanf("%d", &eingabe);
        if (eingabe) {
            summe += eingabe;
            ++k;
        }
        else {
            break;
        }
    }
    printf("Summe: %d \n", summe);
    printf("Mittelwert: %d\n", summe / k); // Nachkommastellen gehen verloren
    
    return 0;
}

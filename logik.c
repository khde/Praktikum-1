#include <stdio.h>
#include "boolisch.h"


// a)
bool implikation(bool a, bool b) {
    if (a == 1 && b == 0) {
        return false;
    }
    return true;
    
}


// b)
bool aequivalenz(bool a, bool b) {
    if (a == b) {
        return true;
    }
    return false;
}


// c)
void wahrheitstabelle() {
    printf("\nImplikation:\n");
    printf("Wahr Falsch A->B\n");
    for (unsigned short h = 0; h <= 1; h++) {
        for (unsigned short k = 0; k <= 1; k++) {
            printf("%hu %hu %hu\n", h, k, implikation(h, k));
        }
    }
    
    printf("\nAequvalenz:\n");
    printf("Wahr Falsch A<->B\n");
    for (unsigned short h = 0; h <= 1; h++) {
        for (unsigned short k = 0; k <= 1; k++) {
            printf("%hu %hu %hu\n", h, k, aequivalenz(h, k));
        }
    }
}


void eingabe() {
    bool e1 = false, e2 = false;
    printf("Implikation: ");
    scanf("%hu %hu", &e1, &e2);
    printf("Resultat: %d\n", implikation(e1, e2));
    
    e1 = false, e2 = false;
    printf("Aequivalenz: ");
    scanf("%hu %hu", &e1, &e2);
    printf("Resultat: %d\n", aequivalenz(e1, e2));
}

int main(int argc, char* argv[]) {
    eingabe();  // Teilaufgabe a) und b)
    wahrheitstabelle();  // Teilaufgabe c)
    return 0;
}

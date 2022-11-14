#include <stdio.h>
#include <time.h>
#include "boolisch.h"

#define A (n % 4 == 0)
#define B (n % 100 == 0) 
#define C (n % 400 == 0)

#define MILLIARDE 1000000000

bool istSchaltjahr1(int n);
bool istSchaltjahr2(int n);


int main(void) {
    time_t startzeit, endzeit;
    unsigned int sj1 = 0, sj2 = 0;
    
    time(&startzeit);
    for (int k = 0; k < MILLIARDE; k++) {
        if (istSchaltjahr1(k)) {
            sj1++;;
        }
    }
    time(&endzeit);
    printf("Schaltjahre 1: %d, Dauer: %lf\n", sj1, difftime(endzeit, startzeit));
    
    time(&startzeit);
    for (int k = 0; k < MILLIARDE; k++) {
        if (istSchaltjahr2(k)) {
            sj2++;;
        }
    }
    time(&endzeit);
    printf("Schaltjahre 2: %d, Dauer: %lf\n", sj2, difftime(endzeit, startzeit));
    
    return 0;
}


bool istSchaltjahr1(int n) {
    if (A && !(B && !C)) {
        return true;
    }
    return false;
}


bool istSchaltjahr2(int n) {
    if ((C || !B) && A) {
        return true;
    }
    return false;
}


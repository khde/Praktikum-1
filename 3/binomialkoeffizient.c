#include <stdio.h>


int fak(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fak(n - 1);
}


unsigned long long int binomialk(unsigned  long long int n, unsigned long long int k) {
    unsigned long long int ergebnis;
    ergebnis = fak(n) / (fak(k) * fak(n - k));
    return ergebnis;
}


int main(void) {
    printf("%lld", binomialk(10, 4));
    return 0;
}

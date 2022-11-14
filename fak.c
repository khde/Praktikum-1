#include <stdio.h>

int fak1(int n);
int fak2(int n);


int main(void) {
    int eingabe;
    
    printf("Fakultaet von ");
    scanf("%d", &eingabe);
    if (eingabe < 0) {
        printf("Zahl muss  >= 0 sein!\n");
        return 1;
    }
    
    printf("Ergebnis: %d\n", fak1(eingabe));
    
    return 0;
}


int fak1(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fak1(n - 1);
}


int fak2(int n) {
    return n == 0 ? 1 : n * fak2(n - 1);
}

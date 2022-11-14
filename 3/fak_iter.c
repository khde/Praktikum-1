#include <stdio.h>


unsigned int fak_iter(unsigned int max) {
	unsigned int fak = 1, k = 1;
	while (k < max + 1) {
		fak *= k;
		k++;
	}
	return fak;
}


int main(void) {
	printf("%d\n", fak_iter(12));
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	long summe = 0, zahl = 0;
	
	if (argc < 3) {
		printf("Nicht genügend Argumente!\n");
		return 1;
	}
	
	for (int k = 1; k < argc; k++) {
		zahl = atol(argv[k]);
		summe += zahl;
	}
	printf("Summe: %ld\n", summe);
	
	return 0;
}

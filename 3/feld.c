#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

bool is_in(int x, int f[MAX], int *index) {
	for (int k = 0; k < MAX; k++) {
		if (f[k] == x) {
			*index = k;
			return true;
		}
	}
	index = NULL;
	return false;
}


int main(void) {
	int position;
	int zahl = 312;
	
	int testfeld[MAX];
	testfeld[386] = zahl;
	
	if (is_in(zahl, testfeld, &position)) {
		printf("Ist enthalten! Position: %d\n", position);
	}
	else {
		printf("%d ist nicht im Feld enthalten!\n", zahl);
	}
	
	return 0;
}

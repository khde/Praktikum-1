#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>  // tolower()
#include <string.h>  // sterlen()

#define MAXCOUNT 256
#define WORTMAX 50

bool ist_anagramm(char  *s1, char *s2) {
	int count1[MAXCOUNT] = {};
	int count2[MAXCOUNT] = {};
	size_t strl = strlen(s1);
	
	if (strl != strlen(s2)) {
		return false;
	}
	
	for (size_t k = 0; k < strl; k++) {
		count1[tolower(s1[k])]++;
		count2[tolower(s2[k])]++;
	}
	
	for (int k = 0; k < MAXCOUNT; k++) {
		if (count1[k] != count2[k]) {
			return false;
		}
	}
	
	return true;
}


int main(void) {
	char w1[WORTMAX];
	char w2[WORTMAX];
	
	printf("Erstes Wort: ");
	fgets(w1, WORTMAX, stdin);
	
	printf("Zweites Wort: ");
	fgets(w2, WORTMAX, stdin);
	
	if (ist_anagramm(w1, w2)) {
		printf("Ist Anagramm\n");
	}
	else {
		printf("Kein Anagramm\n");
	}
	
	return 0;
}

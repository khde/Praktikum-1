#include <stdio.h>
#include <ctype.h>

#define QUELLE "quelle.txt"
#define ZIEL "ziel.txt"


int main(void) {
	FILE *quelle;
	FILE *ziel;
	
	quelle = fopen(QUELLE, "r");
	ziel = fopen(ZIEL, "w");
	
	while (1) {
		char zeichen = fgetc(quelle);
		printf("%c", zeichen);
		switch (zeichen) {
			case EOF:
				goto exit;
			
			case ' ':
				break;
			
			default:
				fputc(toupper(zeichen), ziel);
		}
	}
	
exit:
	fclose(quelle);
	fclose(ziel);
	
	return 0;
}

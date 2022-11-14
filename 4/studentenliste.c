#include <stdio.h>
#include <string.h>

#define MAXV 30
#define MAXN 30
#define MAXL 100
#define clearStdin() while(getchar() != '\n')

typedef struct student {
	unsigned int matrikelnummer;
	unsigned char fachsemester;
	char vorname[MAXV];
	char nachname[MAXN];
} student;


void init(student sl[MAXL]) { 
	for (int k = 0; k < MAXL; k++) {
		sl[k].matrikelnummer = 0;
		sl[k].fachsemester = 0;
		strcpy(sl[k].nachname, "n.n.");
		strcpy(sl[k].vorname, "n.n.");
	}
}


void print(student sl[MAXL]) { 
	for (int k = 0; k < MAXL; k++) {
		printf("\nStudent %d:\n", k + 1);
		printf("Name: %s %s\n", sl[k].vorname, sl[k].nachname);
		printf("Matrikelnummer: %d\n", sl[k].matrikelnummer);
		printf("Fachsemester: %c\n", sl[k].fachsemester);
	}
}


void suchen(student sl[MAXL]) {
	char buffer[MAXN];
	
	printf("Nachname des Studenten eingeben: ");
	clearStdin();
	scanf("%s", buffer);
	
	for (int k = 0; k < MAXL; k++) {
		if (strcmp(buffer, sl[k].nachname) == 0) {
			printf("Student ist enthalten!\n");
			return;
		}
	}
	printf("Student ist nicht enthalten!\n");
}

void loeschen (student sl[MAXL]) {
	char buffer[MAXN];
	
	printf("Nachname des Studenten eingeben: ");
	clearStdin();
	scanf("%s", buffer);
	
	for (int k = 0; k < MAXL; k++) {
		if (strcmp(buffer, sl[k].nachname) == 0) {
			sl[k].matrikelnummer = 0;
			sl[k].fachsemester = 0;
			strcpy(sl[k].nachname, "n.n.");
			strcpy(sl[k].vorname, "n.n.");
			
			printf("Student wurde geloescht!\n");
			return;
		}
	}
	printf("Student ist nicht enthalten!\n");
}

void eingeben(student sl[MAXL]) {
	for (int k = 0; k < MAXL; k++) {
		if (sl[k].matrikelnummer == 0) {
			printf("\nEingabe:\n");
			
			printf("Vorname: ");
			//fgets(sl[k].vorname, MAXV, stdin);
			clearStdin();
			scanf("%s", sl[k].vorname);
			
			printf("Nachname: ");
			//fgets(sl[k].nachname, MAXN, stdin);
			clearStdin();
			scanf("%s", sl[k].nachname);
			
			printf("Matrikelnummer: ");
			clearStdin();
			scanf("%d", &sl[k].matrikelnummer);
			
			printf("Fachsemester: ");
			clearStdin();
			scanf("%c", &sl[k].fachsemester);
			return;
		}
	}
	printf("Keine freier Platz vorhanden!\n");
}


int main(void) {
	student studenten[MAXL];
	short eingabe = 0;
	
	while (1) {
		printf("\nBitte waehlen Sie:\n");
		printf("1\t Student eingeben\n");
		printf("2\t Student suchen\n");
		printf("3\t Student loeschen\n");
		printf("4\t Liste drucken\n");
		printf("5\t Liste initialisieren\n");
		printf("9\t Programm beenden\n");
		
		scanf("%hu", &eingabe);
		switch (eingabe) {
			case 1:
				eingeben(studenten);
				break;
				
			case 2:
				suchen(studenten);
				break;
				
			case 3:
				loeschen(studenten);
				break;
			case 4:
				print(studenten);
				break;
			
			case 5:
				init(studenten);
				break;
			
			case 9:
				return 0;
				
			default:
				break;

		}
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc == 4)
	{
	char* op = argv[1];
	char* a = argv[2];
	char* b = argv[3];
	double r = 0;
	if (strcmp(op, "add") == 0) {
		r = _add(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "sub") == 0) {
		r = _sub(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "mul") == 0) {
		r = _mul(atof(a), atof(b));
		printf("%lf",r);
	}
	else if (strcmp(op, "div") == 0) {
		r = _div(atof(a), atof(b));
		printf("%lf",r);
	}
	else {printf("Erreur de parametres");}
	}
	else {printf("Erreur de parametres");}
	return 0;
}
// src/main.c (Extrait de la logique main)

// ...
    if (strcmp(operation, "car") == 0) {
        if (argc != 3) {
             fprintf(stderr, "Usage: %s car <nombre>\n", argv[0]);
             return 1;
        }
        int a = atoi(argv[2]); // L'entier à mettre au carré
        int result = car(a);
        printf("%d\n", result); // N'affiche que le résultat (25) pour les tests CTest
    } 
    // ... (autres opérations)
// ...

		

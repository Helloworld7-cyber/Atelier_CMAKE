#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
    // Déclarations nécessaires pour toutes les opérations
    char* op = argv[1];
    double r = 0;

    // --- LOGIQUE POUR LES OPÉRATIONS À DEUX ARGUMENTS (add, sub, mul, div) ---
    if (argc == 4)
    {
        char* a = argv[2];
        char* b = argv[3];

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            printf("%lf", r);
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            printf("%lf", r);
        }
        // PAS DE 'else' ICI, on vérifie d'abord l'opération "car" ci-dessous
    } 
    // --- LOGIQUE POUR L'OPÉRATION À UN ARGUMENT (car) ---
    else if (argc == 3) // ⬅️ VÉRIFIEZ LE NOUVEAU NOMBRE D'ARGUMENTS
    {
        // L'opération est toujours argv[1], le nombre est argv[2]
        if (strcmp(op, "car") == 0) { 
            int a = atoi(argv[2]); // L'entier à mettre au carré
            int result = car(a);
            printf("%d\n", result); // Affiche le résultat pour le test CTest
        }
        else { 
            printf("Erreur: Opération non supportée ou nombre d'arguments incorrect pour cette opération.\n"); 
        }
    } 
    // --- GESTION D'ERREUR FINALE ---
    else {
        printf("Erreur de parametres: Nombre d'arguments incorrect (attendu 3 ou 4).\n");
    }

    return 0;
}

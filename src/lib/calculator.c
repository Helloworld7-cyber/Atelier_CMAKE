#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}
// src/lib/calculator.c

#include "calculator.h" // ⬅️ ASSUREZ-VOUS D'AVOIR LE .h ET NON LE .c !

// ... (implémentations existantes)

// Nouvelle fonction 'car'
int car(int a) {
    return a * a;
}	

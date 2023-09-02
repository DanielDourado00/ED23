#ifndef NUMERO_COMPLEOX_H
#define NUMERO_COMPLEXO_H

#include "libs.h"

typedef struct Numero_Complexo Num;
typedef struct Numero_Complexo2 Num2;

Num *inicializar(double, double, double, double);
Num *imprime(double, double, double, double);
Num *soma(double, double, double, double);
Num *Real(double, double);
Num *copia(double, double);

/* void *copia(double, double); */

#endif
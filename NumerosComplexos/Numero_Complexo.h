#ifndef NUMERO_COMPLEOX_H
#define NUMERO_COMPLEXO_H

#include "libs.h"

typedef struct Numero_Complexo Num;

Num *inicializar(double, double, double, double);
Num *imprime(double, double, double, double);
Num *soma(double, double, double, double);
#endif
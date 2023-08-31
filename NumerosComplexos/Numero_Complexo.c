#include "Numero_Complexo.h"

struct Numero_Complexo
{
    double nuc;
    double ni;
};

Num* inicializar(double nuc, double ni){
    Num* n = (Num*) calloc(2, sizeof(Num));
    n -> nuc=nuc;
    n ->ni=ni;
}

Num *imprime(double nuc, double ni){
    Num* n = (Num*) calloc(2, sizeof(Num));
    n -> nuc=nuc;
    n ->ni=ni;
    printf("O numero complexo é: %.0lf + %.0lfi", nuc, ni);
}


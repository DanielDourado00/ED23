#include "Numero_Complexo.h"

struct Numero_Complexo
{
    double nuc;
    double ni;
    double nuc2;
    double ni2;
};

Num *inicializar(double nuc, double ni, double nuc2, double ni2)
{
    Num *n = (Num *)calloc(2, sizeof(Num));
    n->nuc = nuc;
    n->ni = ni;
    n->nuc2 = nuc2;
    n->ni2 = ni2;
}

Num *imprime(double nuc, double ni, double nuc2, double ni2)
{
    Num *n = (Num *)calloc(2, sizeof(Num));
    char op, op2;
    n->nuc = nuc;
    n->ni = ni;
    n->nuc2 = nuc2;
    n->ni2 = ni2;

    printf("Deseja imprimir o numero na forma (R+CI)? (s/n)");
    scanf("%c", &op);
    if (op == 's')
    {
        printf("No formato (R+Ci) é: %.0lf + %.0lfi", nuc, ni);
    }
}

// somar dois numeros complexos
Num *soma(double nuc, double ni, double nuc2, double ni2)
{
    Num *n = (Num *)calloc(2, sizeof(Num));
    n->nuc = nuc;
    n->ni = ni;
    n->nuc2 = nuc2;
    n->ni2 = ni2;
    printf("A soma dos numeros complexos é: %.0lf + %.0lfi", nuc + nuc2, ni + ni2);
}

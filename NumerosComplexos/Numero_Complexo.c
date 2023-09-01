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
    printf("O numero complexo é: %.0lf + %.0lfi\n", nuc, ni);
    printf("O segundo numero complexo é: %.0lf + %.0lfi\n", nuc2, ni2);
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

// testando se o numero é real
Num *Real(double numero1, double numero2)
{
    if (cimag(numero1) == 0)
    {
        printf("\nO numero %.0lf é real\n", numero1);
    }
    else
    {
        printf("\nO numero %.0lf não é real\n", numero1);
    }
    if (cimag(numero2) == 0)
    {
        printf("\nO numero %.0lf é real\n", numero2);
    }
    else
    {
        printf("\nO numero %.0lf não é real\n", numero2);
    }
}

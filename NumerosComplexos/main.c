/* Exercicio 1) Implemente um TAD "Numero complexo" e implemente as seguintes operações
Inicializar> atribui valores para os campos         OK  
Imprimir o numero na forma (R+Ci) onde R é real e Ci é imaginário
Copia copia um numero complexo para outro
Soma soma dois numeros complexos
EhReal: testa se um numero é real
 */

#include "Numero_Complexo.h"

int main (void){

    double nuc, ni, nuc2, ni2;
    
    printf("enter a number:" );
    scanf("%lf", &nuc);
    printf("enter a imaginary number: ");
    scanf("%lf", &ni);
    printf("enter a second number:" );
    scanf("%lf", &nuc2);
    printf("enter a second imaginary number: ");
    
    Num *p1 = inicializar(nuc, ni, nuc2, ni2);
    Num *p11 = imprime(nuc, ni, nuc2, ni2);
    
    return 0;
}


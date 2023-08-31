/* Exercicio 1) Implemente um TAD "Numero complexo" e implemente as seguintes operações
Inicializar> atribui valores para os campos         OK  
Imprimir o numero na forma (R+Ci) onde R é real e Ci é imaginário
Copia copia um numero complexo para outro
Soma soma dois numeros complexos
EhReal: testa se um numero é real
 */

#include "Numero_Complexo.h"

int main (void){

    double nuc, ni;
    printf("digite um numero:" );
    scanf("%lf", &nuc);
    printf("digite um numero imaginario: ");
    scanf("%lf", &ni);
    
    Num *p1 = inicializar(nuc, ni);
    Num *p11 = imprime(nuc, ni);
    
    return 0;
}


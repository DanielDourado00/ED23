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

    printf("enter a number real and number complex:" );
    scanf("%lf \n %lf", &nuc, &ni);
    double complex numero1 = nuc + ni * I;


    printf("enter a number real and number complex:" );
    scanf("%lf %lf", &nuc2, &ni2);
    double complex numero2 = nuc2 + ni2 * I;
    
    Num *p1 = inicializar(nuc, ni, nuc2, ni2);  
    Num *p11 = imprime(nuc, ni, nuc2, ni2);
    Num *ps = soma(nuc, ni, nuc2, ni2);
    Num *r = Real(numero1, numero2);

    
    return 0;
}


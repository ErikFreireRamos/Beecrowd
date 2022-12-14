/*
Uma das formas de calcular a raiz quadrada de um número natural é pelo método das frações periódicas continuadas. 
Esse método usa como denominador uma repetição de frações. Essa repetição pode ser feita uma quantidade específica de vezes.

Por exemplo, ao repetir 2 vezes a fração continuada para calcular a raiz quadrada de 10, temos a fórmula abaixo.


Sua tarefa é, dado o número N de repetições, calcular o valor aproximado da raiz quadrada de 10.
Entrada

A entrada é um número natural N (0 ≤ N ≤ 100), que indica o número de repetições do denominador na fração continuada.

Saída
A saída é o valor aproximado da raiz quadrada com 10 casas decimais.
*/
#include <stdio.h>
#include <math.h>

int main(void){

    double i,n,raiz=0;

    scanf("%lf",&n);

    for (i = 0; i < n; i++)
    {
        raiz+=6.0;
        raiz=1.0/raiz;
    }
    raiz+=3;
    printf("%.10lf\n",raiz);
    

    return 0;
}
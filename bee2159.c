/*
Schoenfeld e Rosser publicaram em 1962 um artigo descrevendo um valor mínimo e máximo para a quantidade de números primos até n, 
para n ≥ 17. Esta quantidade é representada pela função (n) e a fórmula é mostrada abaixo.

Sua tarefa é, dado um natural n, calcular o mínimo e máximo do intervalo para o número aproximado de primos até n.

Entrada
A entrada é um número natural n (17 ≤ n ≤ 109).

Saída
A saída são dois valores P e M com 1 casa decimal cada, tal que P < (n) < M, de acordo com a fórmula dada acima. 
Os valores devem ser separados por um espaço em branco.
*/
#include <stdio.h>
#include <math.h>


int main(void){

    unsigned numero;

    scanf("%u",&numero);

    printf("%.1f ",(numero/log(numero)));
    printf("%.1f\n",((1.25506 * numero) / log(numero)));


    return 0;
}
/*
 * Arquivo:    Exercicio002.c
 * Autor:      Kaua Souza
 * Finalidade: Le uma temperatura em Fahrenheit e imprime a temperatura
 *             convertida em graus Celsius.
 * Data: 17 ago. 2026
 */

#include <stdio.h>

int main() {
    double f, c;
    scanf("%lf", &f);

    c = 5.0 / 9.0 * (f - 32);

    printf("%.4f\n", c);

    return 0;
}

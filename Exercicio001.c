/*
 * Arquivo:    Exercicio001.c
 * Autor:      Kaua Souza
 * Finalidade: Resolve equacoes do 2o grau, lendo coeficientes a, b e c e
 *             imprimindo o numero de raizes reais e cada uma das raizes reais.
 * Data: 17 ago. 2026
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("0\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("1 %.4f\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("2 %.4f %.4f\n", x1, x2);
    }

    return 0;
}
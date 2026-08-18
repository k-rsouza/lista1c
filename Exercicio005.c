/*
 * Arquivo:    Exercicio005.c
 * Autor:      Kaua Souza
 * Finalidade: Le tres valores e verifica se podem ser os lados de um triangulo,
 *             classificando-o em EQUILATERO, ISOSCELES ou ESCALENO.
 * Data: 17 ago. 2026
 */

#include <stdio.h>

int main() {
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("EQUILATERO\n");
        } else if (x == y || y == z || x == z) {
            printf("ISOSCELES\n");
        } else {
            printf("ESCALENO\n");
        }
    } else {
        printf("NAO EH TRIANGULO\n");
    }

    return 0;
}

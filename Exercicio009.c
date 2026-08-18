/*
 * Arquivo:    Exercicio009.c
 * Autor:      Kaua Souza
 * Finalidade: Le um valor N que indica quantos valores inteiros serao lidos a
 *             seguir, entao retorna o valor e o seu fatorial.
 * Data: 17 ago. 2026
 */

#include <stdio.h>

int main() {
    int n, i, j, valor;
    long long fatorial;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &valor);

        fatorial = 1;
        for (j = 2; j <= valor; j++) {
            fatorial = fatorial * j;
        }

        printf("%d %lld\n", valor, fatorial);
    }

    return 0;
}

/*
 * Arquivo:    Exercicio026.c
 * Autor:      Kaua Souza
 * Finalidade: Le um valor inteiro n e retorna todos os seus
 *             divisores, desconsiderando 1 e o proprio n, 
 *             retornando "*" se nao houver divisores.
 * Data: 17 ago. 2026
 */

#include <stdio.h>

int main() {
    int n, i, encontrou = 0;

    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            if (encontrou) {
                printf(" ");
            }
            printf("%d", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("*");
    }
    printf("\n");

    return 0;
}

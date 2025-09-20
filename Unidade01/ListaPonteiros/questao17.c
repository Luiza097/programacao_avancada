#include <stdio.h>
#include <stdlib.h>

void aloca_memoria() {
    int *dados = (int *)malloc(100 * sizeof(int));
    if (dados == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return;
    }

    // A memoria alocada nessa funcao e nao eh liberada
}

int main() {
    printf("Alocando memoria com vazamento...\n");
    aloca_memoria();
    printf("Programa terminou. A memoria nao foi liberada.\n");
    return 0;
}

/* Para corrigir esse problema, a melhor maneira é colocar um free()
na mesma função em que a memória foi alocada.
*/
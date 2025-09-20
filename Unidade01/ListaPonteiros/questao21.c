#include <stdio.h>

// Funcao de comparacao para ordem crescente
// Retorna um valor negativo se a < b, 0 se a == b, positivo se a > b
int comparar_crescente(int a, int b) {
    return a - b;
}

// Funcao de comparacao para ordem decrescente
// Retorna um valor negativo se a > b, 0 se a == b, positivo se a < b
int comparar_decrescente(int a, int b) {
    return b - a;
}

// Funcao de ordenacao que recebe um ponteiro para funcao de comparacao
void ordenar_int(int *vetor, int n, int (*comparar)(int, int)) {
    int i, j, temp;

    // Laco externo do Bubble Sort
    for (i = 0; i < n - 1; i++) {
        // Laco interno para comparar e trocar elementos
        for (j = 0; j < n - i - 1; j++) {
            // Usa o ponteiro para a funcao de comparacao para decidir a ordem
            if (comparar(vetor[j], vetor[j+1]) > 0) {
                // Se a funcao de comparacao retornar > 0, os elementos estao na ordem errada, entao troca
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

// Funcao auxiliar para imprimir o vetor
void imprimir_vetor(int *vetor, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor1[] = {6, 3, 7, 1, 8};
    int vetor2[] = {6, 3, 7, 1, 8};
    int n = 5;

    printf("Vetor original: ");
    imprimir_vetor(vetor1, n);

    // Ordena em ordem crescente usando a funcao 'comparar_crescente'
    ordenar_int(vetor1, n, comparar_crescente);
    printf("Vetor em ordem crescente: ");
    imprimir_vetor(vetor1, n);

    // Ordena em ordem decrescente usando a funcao 'comparar_decrescente'
    ordenar_int(vetor2, n, comparar_decrescente);
    printf("Vetor em ordem decrescente: ");
    imprimir_vetor(vetor2, n);

}
#include <stdio.h>
#include <stdlib.h>

// Função de ordenação (Bubble Sort)
void ordenarVetor(float *vetor, int n) {
    int i, j;
    float temp;

    // Duas lacos de repeticao para comparar e trocar elementos
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Se o elemento atual for maior que o proximo, troca
            if (vetor[j] > vetor[j+1]) {
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    float *vetor_float;

    // 1. Solicita o numero de elementos
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    // 2. Aloca a memoria dinamicamente
    vetor_float = (float *)malloc(n * sizeof(float));

    // Verifica se a alocacao foi bem-sucedida
    if (vetor_float == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os %d numeros:\n", n);
    // 3. Le os valores do teclado
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor_float[i]);
    }

    // 4. Ordena o vetor usando a funcao de ordenacao
    ordenarVetor(vetor_float, n);

    // 5. Imprime o vetor ordenado
    printf("Os numeros em ordem crescente sao:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", vetor_float[i]);
    }
    printf("\n");

    // 6. Libera a memoria alocada dinamicamente
    free(vetor_float);
}
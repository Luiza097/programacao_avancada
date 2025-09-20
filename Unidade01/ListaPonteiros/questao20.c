#include <stdio.h>
#include <stdlib.h>

// Funcao de comparacao para qsort()
// Recebe dois ponteiros genericos (void*) e retorna um int.
int compararFloats(const void *a, const void *b) {
    // Converte os ponteiros genericos de volta para ponteiros de float
    const float *pA = (const float *)a;
    const float *pB = (const float *)b;

    // Compara os valores e retorna um valor que indica a ordem
    // Se *pA for menor que *pB, retorna um valor negativo.
    if (*pA < *pB) {
        return -1;
    }
    // Se *pA for maior que *pB, retorna um valor positivo.
    else if (*pA > *pB) {
        return 1;
    }
    // Se os valores forem iguais, retorna 0.
    else {
        return 0;
    }
}

int main() {
    int n, i;
    float *vetor_float;

    // Solicita a quantidade de numeros ao usuario
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    // Aloca a memoria dinamicamente para o vetor de floats
    vetor_float = (float *)malloc(n * sizeof(float));

    // Verifica se a alocacao foi bem-sucedida
    if (vetor_float == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Le os valores do teclado e os armazena no vetor
    printf("Digite os %d numeros\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &vetor_float[i]);
    }

    // Chama a funcao qsort() para ordenar o vetor
    // 1. vetor_float: o array a ser ordenado
    // 2. n: o numero de elementos no array
    // 3. sizeof(float): o tamanho de cada elemento
    // 4. compararFloats: a funcao de comparacao
    qsort(vetor_float, n, sizeof(float), compararFloats);

    // Imprime o vetor ordenado
    printf("\nOs numeros em ordem crescente sao:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", vetor_float[i]);
    }
    printf("\n");

    // Libera a memoria alocada dinamicamente
    free(vetor_float);
}
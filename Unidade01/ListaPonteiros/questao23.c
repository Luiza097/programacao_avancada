#include <stdio.h>
#include <stdlib.h>

// Funcao para somar os elementos correspondentes de dois vetores
void soma_vetores(float *vet1, float *vet2, float *resultado, int n) {
    int i;
    for (i = 0; i < n; i++) {
        // Acessa os elementos correspondentes e armazena a soma no vetor resultado
        *(resultado + i) = *(vet1 + i) + *(vet2 + i);
    }
}

int main() {
    int n, i;
    float *vet1, *vet2, *resultado;

    // 1. Recebe o tamanho dos vetores
    printf("Digite o numero de elementos dos vetores: ");
    scanf("%d", &n);

    // 2. Aloca a memoria para os tres vetores
    vet1 = (float *)malloc(n * sizeof(float));
    vet2 = (float *)malloc(n * sizeof(float));
    resultado = (float *)malloc(n * sizeof(float));

    // Verificacao de erro na alocacao
    if (vet1 == NULL || vet2 == NULL || resultado == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // 3. Le os elementos do primeiro vetor
    printf("Digite os %d elementos do primeiro vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &vet1[i]);
    }

    // 4. Le os elementos do segundo vetor
    printf("Digite os %d elementos do segundo vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &vet2[i]);
    }

    // 5. Chama a funcao de soma
    soma_vetores(vet1, vet2, resultado, n);

    // 6. Imprime o vetor de resultado
    printf("\nO vetor de soma e:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", resultado[i]);
    }
    printf("\n");

    // 7. Libera a memoria alocada
    free(vet1);
    free(vet2);
    free(resultado);

    return 0;
}
#include <stdio.h>

// Funcoes para as quais o ponteiro ira apontar
int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int main() {
    // Declaracao do ponteiro para funcao
    // Ele aponta para funcoes que recebem 2 'int' e retornam 1 'int'.
    int (*operacao)(int, int);

    // 3. Atribui o endereco da funcao 'somar' ao ponteiro
    operacao = somar;

    // 4. Chama a funcao 'somar' atraves do ponteiro 'operacao'
    int resultado1 = operacao(10, 5);
    printf("Resultado da soma: %d\n", resultado1); // Saida: 15

    // 5. Atribui o endereco da funcao 'subtrair' ao mesmo ponteiro
    operacao = subtrair;

    // 6. Chama a funcao 'subtrair' atraves do ponteiro 'operacao'
    int resultado2 = operacao(10, 5);
    printf("Resultado da subtracao: %d\n", resultado2); // Saida: 5
}
#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    // SAÍDA: 20
    // p1 = &valor. p1 está apontando para o endereço de memória de valor
    // *p1=20 altera conteúdo do endereço apontado por p1
    // logo, o conteúdo de valor foi alterado para 20.

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    // SAÍDA: 29.0
    // A p2 está apontando para o endereço de memória de temp
    // *p2 = 29.0 altera o conteúdo do endereço apontado por p2
    // logo, o conteúdo de temp foi alterado para 29.0

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    // SAÍDA: P
    // p3 = &nome[0] p3 está apontando para o endereço de memória
    // de nome na posição 0 = P
    // aux recebe o conteúdo de p3. 
    // E p3 aponta para o nome da posição 0, que é P


    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    // SAÍDA: E
    // p3 = &nome[4] p3 está apontando para o endereço de memória
    // de nome na posição 4 = E
    // aux recebe o conteúdo de p3. 
    // E p3 aponta para o nome da posição 4, que é E

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    // SAÍDA: P
    // 'nome' é um ponteiro para a string "Ponteiros". Ao atribuir 'p3 = nome',
    // p3 aponta para o endereço inicial da string, que é o caractere 'P'.
    // *p3 acessa esse valor.
    // Portando a saíde é P.

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);
    // SAÍDA: E
    // Antes, p3 apontava para o início de nome, agora,
    // foi incrementado em 04 posições, onde está a letra E
    // *p3 acessa esse valor
    // portanto, a saída é E.


    /* (g) */
    p3--;
    printf("%c \n", *p3);
    // SAÍDA: T
    // p3 estava apontando para a posição 04, com o decremento
    // passa a apontar para a posição 03, onde está a letra T
    // portanto, a saída é T.

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    // SAÍDA: 31
    // p4 está apontando para o valor do vetor na primeira posição
    // idade recebe o conteúdo de p4
    // como p4 aponta para vetor[0], idade receber 31
    // portando, a saída é 31

    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
    // SAÍDA: 45
    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
    // SAÍDA: 27
    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
    // SAÍDA: 31
    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    // SAÍDA: 45
    /* (n) */
    p5++;
    printf("%d \n", *p5);
    //SAÍDA: 27
    return (0);
    
}
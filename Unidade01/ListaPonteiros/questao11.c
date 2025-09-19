#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct teste{
    int x = 3;
    char nome[] = "jose";
    // Uma struct não permite que as variáveis sejam
    // inicializadas dentro da estrutura da struct
};

main(){
    struct teste *s; // o ponteiro não foi inicializado
    printf("%d", s->x);
    printf("%s", s->nome); // tenta mudar para onde o array aponta
}
*/

//// CÓDIGO CORRIGIDO

struct teste{
    int x;
    char nome[];
};

int main() {
    // 2. Ponteiro s inicializado com alocação dinâmica de memória
    struct teste *s = (struct teste *)malloc(sizeof(struct teste));

    // Atribuição de valores aos membros da estrutura
    s->x = 3;
    strcpy(s->nome, "jose");

    // Impressão correta dos membros da estrutura
    printf("O valor de x e: %d\n", s->x);
    printf("O nome e: %s\n", s->nome);

    free(s); // Libera a memoria alocada para s
    return 0;
}
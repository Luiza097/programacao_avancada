#include <stdio.h>
int f(int a, int *pb, int **ppc) {
    // pb aponta para c, ppc aponta para b
    int b, c;
    **ppc += 1; // incrementa 1 em c da main. c=6
    c = **ppc; // c local recebe o valor de c main
    *pb += 2; // c passa a valer 8
    b = *pb; // b recebe o valor de c
    a += 3; // c da main recebe mais 3. Como esse valor não foi alterado por endereço
    // de memória, então o que é modificado é a cópia do valor c da main passado para a
    // função, não o valor c original
    return a + b + c;
    // Isso significa então que teremos 6+8+8 que é igual a 22
}
void main() {
    int c, *b, **a;
    c = 5;
    b = &c; // b aponta para c
    a = &b; // a ponta para b
    printf("%d\n", f(c, b, a));
    getchar();
}
#include <stdio.h>
int main(){
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
    {7, 8, 9}, {10, 11, 12}};
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

/*
O programa irá exibir o mesmo endereço de memória três vezes.
Isso ocorre devido à forma como o C armazena arrays multidimensionais
na memória de forma contígua. A expressão x + 3 aponta para
a quarta linha. O *(x + 3) desreferencia esse endereço,
resultando no endereço do primeiro elemento da quarta linha.
Já a expressão *(x + 2) + 3 primeiro aponta para a terceira linha e,
em seguida, avança três posições de unsigned int,
o que a leva ao quarto elemento da terceira linha. Mas, estamos falando
uma matriz 4x3, então não existe um quarto elemento da terceira linha.
Então o código irá apontar para o endereço do primeiro elemento
da próxima linha, que é a linha 04 novamente.
*/
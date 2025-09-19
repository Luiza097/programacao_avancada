#include <stdio.h>
void main(){
    int const *x = 3;
    printf("%d", ++(*x));
}

// O cóidog produz um erro de compilação pois const sinaliza
// que aquela variável é apenas para leitura, e no printf
// é feito um incremento. Além disso, x é um ponteiro, um ponteiro
// deve receber um valor de endereço de memória, não um int.
// o incremento também não faz parte da aritmética de ponteiros
#include <stdio.h>

void funcao(char **p){
    // A função recebe um ponteiro para ponteiro 
    // **p vai apontar para o endereço do primeiro elemento de a
    // ou seja, a[0], que é "ab"
    char *t;
    t = (p += sizeof(int))[-1];
    // t recebe p, que recebe o tamanho do int
    // p passa a apontar para a[4]
    // p passa a apontar para a[3]
    printf("%s\n", t);
    // a saída será gh
}
int main(){
    // array de ponteiros para caracteres
    char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
    funcao(a);
    return 0;
}
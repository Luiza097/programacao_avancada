#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void funcao(char** str)
{
    *str++; // str é um parametro local, do tipo char**
    // char** um ponteiro para ponteiro de char
    //
}
int main()
{
    char *str = (void *)malloc(50 * sizeof(char)); //str foi alocada
    strcpy(str, "Agostinho"); // str foi copiada com "Agostinho"
    funcao(&str); //O endereço de memória de str é passado para funcao
    puts(str);
    free(str);
    return 0;
}

/* O resultado esperado não foi obtido porque funcao apenas incrementa
a cópida local do ponteiro str, sem alterar o ponteiro da função main.
Para modificar o ponteiro de verdade, é necessário desreferenciar
o parâmetro(*str) e incrementá-lo (*str)++
*/
/// CÓDIGO CORRIGIDO
void funcao(char** str)
{
    (*str)++; // str foi desreferenciado
    //
    //
}
int main()
{
    char *str = (void *)malloc(50 * sizeof(char)); //str foi alocada
    strcpy(str, "Agostinho"); // str foi copiada com "Agostinho"
    funcao(&str); //O endereço de memória de str é passado para funcao
    puts(str);
    free(str-1);
    return 0;
}
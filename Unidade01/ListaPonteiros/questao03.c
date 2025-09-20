// i e j são int
// p e q são ponteiros
// qual das opções a seguir da erro?

#include <stdio.h>

int main() {
    int i, j;
    int *p, *q;
    
    // Teste 1: Valida
    p = &i; //p vai armazenar o endereço de i
    
    // Teste 2: Invalida, mas não causa erro
    *q = &j; //*q é um int não um ponteiro, não pode receber endereço de memória
    
    // Teste 3: Valida
    p = &*&i; // vai apontar para o endereço de i
    
    // Teste 4: ERRO DE COMPILAÇÃO
    //i = (*&)j; erro, (*&) é uma sintaxe inválida

    // Teste 5: Valida
    i = *&j; // retona o valor da variável j
    
    // Teste 6: Invalida, mas não causa erro
    i = *&*&j; // *&j é um inteiro, e o compilador não pode desreferenciá-lo.
   
    // Teste 7: Invalida, mas não causa eroo
    q = *p; // q, é um ponteiro para int. Você não pode atribuir um valor inteiro a um ponteiro.
    
    // Teste 8: Valida
    i = (*p)+++*q; // ++ é aplicado ao valor de *p, que é um int. O resultado da soma entre (*p)++ e *q é um int
    
    return 0;
}
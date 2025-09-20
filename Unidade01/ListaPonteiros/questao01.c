
#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    

    printf("Valor de p==&i: %d \n",p == &i);
    /*
    p == &i;
    Retorna verdadeiro(1). A variável p recebeu como valor
    o endereço da variável i "&i". Logo, ao comparar se p
    o valor de p é igual ao valor do endereço de memória de i,
    o retorno é igual a True(1), 
    */

    printf("Valor de *p - *q: %d \n",*p - *q);
    /*
    *p - *q
    O valor obtido através da expressão será -2. Pois
    *p armazena o valor do endereço de memória de i(3)
    e ponteiro q armazena o valor do endereço de memória
    de j(5). 3-5 = -2.
    */
    
   printf("O valor de **&p é= %d \n", **&p);
   //**&p;
    /* Podemos pensar assim:
    &p = Retorna o endereço de memória do próprio ponteiro p
    *&p = Retorna o conteúdo do endereço de p, como p
    é um ponteiro, então ele armazena o endereço de memória
    de outra variável, no caso, da variável i. Então aqui
    será retornado o valor do endereço de memória de i
    **&p = Aqui, o código irá pegar o conteúdo respectivo ao
    endereço de memória de i, que é 3.
    Portanto, o valor final a ser retornado é 3;
    */

   printf("O valor de 3-*p/(*q)+7 é= %d \n", 3 -*p/(*q) + 7);
   //3 -*p/(*q) + 7;
    /* *p = O conteúdo de ponteiro p = 3
    *q = O conteúdo de ponteiro q = 5
    3-3/(5)+7
    1º 3/5 = 0
    2º 3-0+7 = 10
    O valor a ser retornado é 10;
    */

}
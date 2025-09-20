#include <stdio.h>

char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a + 3, a + 2, a + 1, a};
char ***c = b;

int main() {
    printf("%s ", **++c);
    printf("%s ", *--*++c + 3);
    printf("%s ", *c[-2] + 3);
    printf("%s ", c[-1][-1] + 1);
    return 0;
}
/* printf("%s", **++c);
c: Inicialmente, c aponta para o início do array b (o endereço de b[0]).
++c: O operador de pré-incremento avança c em uma posição. Agora, c aponta para b[1].
*++c: Desreferencia o novo endereço de c (b[1]). O valor em b[1] é a+2 (o endereço de a[2], a string "BRITO").
**++c: Desreferencia o endereço de a[2], acessando o valor da string "BRITO".
Saída: BRITO
Estado de c: Aponta para b[1].

2. printf("%s", *--*++c + 3);
*++c: A prioridade é do ++. O ponteiro c (que estava em b[1]) é incrementado para apontar para b[2]. O * desreferencia b[2], cujo valor é a+1 (o endereço de a[1], a string "MEDEIROS").
*--(...): O operador -- é aplicado ao resultado do passo anterior, que é o endereço de a[1]. O endereço de a[1] é decrementado em uma posição, fazendo-o apontar para a[0] (a string "AGOSTINHO"). O * desreferencia esse novo endereço, acessando a string "AGOSTINHO".
(...) + 3: A expressão agora é o endereço da string "AGOSTINHO". Somar 3 a esse endereço avança o ponteiro 3 posições, para o caractere 'S' de "AGOSTINHO".
Saída: STINHO
Estado de c: Aponta para b[2].

3. printf("%s", *c[-2] + 3);
c[-2]: A notação de array c[i] é equivalente a *(c+i). Então c[-2] é *(c + (-2)). O ponteiro c (que está em b[2]) é movido 2 posições para trás, para o endereço de b[0]. O * desreferencia b[0], cujo valor é a+3 (o endereço de a[3], a string "JUNIOR").
*c[-2]: O resultado do passo anterior é o endereço de a[3]. O * desreferencia esse endereço, acessando a string "JUNIOR".
(...) + 3: Somar 3 ao endereço da string "JUNIOR" move o ponteiro para o caractere 'I' da string.
Saída: IOR
Estado de c: Aponta para b[2]. Esta operação não modificou o ponteiro c.

4. printf("%s", c[-1][-1] + 1);
c[-1]: A notação c[-1] é *(c-1). O ponteiro c (em b[2]) é movido para b[1]. O * desreferencia b[1], que aponta para o endereço de a[2].
c[-1][-1]: A notação b[-1] é *(b-1). A expressão agora é *( (ponteiro para a[2]) + (-1) ). O ponteiro a[2] (para "BRITO") é movido para trás 1 posição, para o endereço de a[1] (para "MEDEIROS").
(...) + 1: A expressão agora é o endereço da string "MEDEIROS". Somar 1 a esse endereço avança o ponteiro para o caractere 'E' de "MEDEIROS".
Saída: EDEIROS
Estado de c: Aponta para b[2]. Esta operação também não modifica o ponteiro c.
*/
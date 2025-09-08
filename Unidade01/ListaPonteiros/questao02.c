#include <stdio.h>

main(){
    int i=5, *p;
    p = &i; //i ocupa o endereço 4094 na memória
    printf("%p %p %d %d %d %d \n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}

/*
Supondo que i ocupa o endereço 4094 na memória, o programa
irá imprimir o seguinte:
p com especificador %p: FFE
p+1 com especificador %p: 1000
*p+2 com especificador %d: 7
**&p com especificador %d: 5
3**p com especificador %d: 15
**&p+4 com especificador %d: 9
*/
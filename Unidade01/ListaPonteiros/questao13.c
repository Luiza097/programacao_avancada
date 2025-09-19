#include <stdio.h>
int main(){
    char x[4];
    int y[4];
    float z[4];
    double h[4];
    x[0] = 1;
    y[0] = 2;
    z[0] = 3;
    h[0] = 4;

    printf("x:%d, x+1: %d, x+2: %d, x+3=%d\n",x, x+1, x+2, x+3);
    printf("y:%d, y+1: %d, y+2: %d, y+3=%d\n",y, y+1, y+2, y+3);
    printf("z:%d, z+1: %d, z+2: %d, z+3=%d\n",z, z+1, z+2, z+3);
    printf("h:%d, h+1: %d, h+2: %d, h+3=%d\n",x, x+1, x+2, x+3);

}

/*
Quais serão os valores de x+1, x+2 e x+3 se:
◦ x for declarado como char? 4093, 4094, 4095. Aritmética de ponteiros
com char avança o endereço um byte por vez.
◦ x for declarado como int? 4094, 4096, 4098. Aritmética de ponteiros
com int avança o endereço 2 bytes por vez.
◦ x for declarado como float?  4096, 4100, 4104. Aritmética de ponteiros
com float avança o endereço 4 bytes por vez.
◦ x for declarado como double? 4100, 4108, 116. Aritmética de ponteiros
com cdouble avança o endereço 8 bytes por vez.
*/

/*
O resultado do código confirma que a aritimética de ponteiros é
feita pelo tamanho do tipo de dado.
*/
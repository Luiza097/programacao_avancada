#include <stdio.h>

int main(){
    int a, b;
    int x, y, z;
    scanf("%d %d", &a, &b);
    x = a; y = b; z = a + b;
    while (a) {
        x = x | b; // 10 ou 1, Verdadeiro
        y = y ^ a;
        z = z & (a+b);
        a = a >> 1;
    b = b << 1;
    }
    printf ("%d %d %d\n", x, y, z); //SAÍDA 15, 13, 0
    return 0;
}

/*
////// ITERAÇÃO 01 //////
Iteração 1: a = 10 (binário 1010). A condição a é verdadeira.
x = x | b; -> x = 1010 OR 0001 = 1011 (decimal 11).
y = y ^ a; -> y = 0001 XOR 1010 = 1011 (decimal 11).
z = z & (a + b); -> z = 1011 AND (1010 + 0001) = 1011 AND 1011 = 1011 (decimal 11).
a = a >> 1; -> a = 1010 >> 1 = 0101 (decimal 5).
b = b << 1; -> b = 0001 << 1 = 0010 (decimal 2).

////// ITERAÇÃO 02 //////
Iteração 2: a = 5 (binário 0101). A condição a é verdadeira.
x = x | b; -> x = 1011 OR 0010 = 1011 (decimal 11).
y = y ^ a; -> y = 1011 XOR 0101 = 1110 (decimal 14).
z = z & (a + b); -> z = 1011 AND (0101 + 0010) = 1011 AND 0111 = 0011 (decimal 3).
a = a >> 1; -> a = 0101 >> 1 = 0010 (decimal 2).
b = b << 1; -> b = 0010 << 1 = 0100 (decimal 4).

////// ITERAÇÃO 03 //////
Iteração 3: a = 2 (binário 0010). A condição a é verdadeira.
x = x | b; -> x = 1011 OR 0100 = 1111 (decimal 15).
y = y ^ a; -> y = 1110 XOR 0010 = 1100 (decimal 12).
z = z & (a + b); -> z = 0011 AND (0010 + 0100) = 0011 AND 0110 = 0010 (decimal 2).
a = a >> 1; -> a = 0010 >> 1 = 0001 (decimal 1).
b = b << 1; -> b = 0100 << 1 = 1000 (decimal 8).

////// ITERAÇÃO 04 //////
Iteração 4: a = 1 (binário 0001). A condição a é verdadeira.
x = x | b; -> x = 1111 OR 1000 = 1111 (decimal 15).
y = y ^ a; -> y = 1100 XOR 0001 = 1101 (decimal 13).
z = z & (a + b); -> z = 0010 AND (0001 + 1000) = 0010 AND 1001 = 0000 (decimal 0).
a = a >> 1; -> a = 0001 >> 1 = 0000 (decimal 0).
b = b << 1; -> b = 1000 << 1 = 0001 0000 (decimal 16).
*/
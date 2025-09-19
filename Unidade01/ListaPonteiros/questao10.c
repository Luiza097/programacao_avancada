#include <stdio.h>
int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
    printf("%d ", *(vet+i));
    }
}

/* PRIMEIRO PROGRAMA:
Printa cada valor do vetor vet usando a aritemética de ponteiros
*/

int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
    printf("%X ",vet+i);
}

/* SEGUNDO PROGRAMA:
Printa o endereço de memória de cada elemento de vet
no formato hexadecimal
*/

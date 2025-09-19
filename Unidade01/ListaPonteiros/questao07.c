int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5}; // array de 05 elementos
    float *f; // ponteiro
    int i;
    f = vet; // f guarda o endereço de vet
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0 ; i <= 4 ; i++){
    printf("i = %d",i);
    // SAÍDA: 0 até 4
    printf(" vet[%d] = %.1f",i, vet[i]);
    // SAÍDA: vet[i] = elemento do indice
    printf(" *(f + %d) = %.1f",i, *(f+i));
    // SAÍDA: *(f + i) = elemento do indice
    printf(" &vet[%d] = %X",i, &vet[i]);
    // SAÍDA: "&vet[i] = endereço do elemento do indice em hexadecimal
    printf(" (f + %d) = %X",i, f+i);
    // SAÍDA: (f+i) = endereço de memório do elemento em hexadecimal 
    printf("\n");
    }
}
int main(){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value; // VÁLIDO: O elemento no segundo indice de aloha recebe value
    scanf("%f", &aloha); // INVÁLIDO: Scanf espera um ponteiro para float e foi passado um endereço de um vetor
    aloha = "value"; // INVÁLIDO: Para acrescentar um valor em aloha, precisaria ser indicado o indice.
    printf("%f", aloha); //INVÁLIDO: Scanf espera um ponteiro para float, e recebeu um ponteiro para o primeiro elemento de aloha
    coisas[4][4] = aloha[3]; //VÁLIDO: Acesa o elemento de indice 03 de aloha e insere ele na posição [4][4] de coisas
    coisas[5] = aloha; // INVÁLIDO: Não se pode atribuir um array inteiro a outro array
    pf = value; // INVÁLIDO: Ponteiro precisa apontar para um endereço de memória
    pf = aloha; // VÁLIDO: pf esta apontando para o endereço de memória do primeiro elemento de aloha
}
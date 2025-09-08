// i e j são int
// p e q são ponteiros
// qual das opções a seguir da erro?

/*
p = &i; ---> okay, p vai armazenar o endereço de i
*q = &j; ---> q é um int não um ponteiro, não pode receber
endereço de memória
p = &*&i; ---> vai apontar para o endereço de i
i = (*&)j; ---> erro, i é um int e não funciona com
operadores dos ponteiros
i = *&j; ---> ERRO
i = *&*&j; ---> ERRO
q = *p;
i = (*p)++ + *q;
*/
//p = mat + 1; // VÁLIDA: p vai guardar o endereço do segundo elemento
//p = mat++; // INVÁLIDA: não é possível modificar o valor de mat
//p = ++mat; // INVÁLIDA: não é possível modificar o valor de mat
//x = (*mat); // VÁLIDA: Retorna o valor do primeiro elemento do vetor mat

/*
p = mat + 1 é válido pois é uma aritimética de ponteiros, dessa forma 
é possível "caminhar" pelos indices do vetor
As expressões p = mat++ e p = ++mat não são válidas pq tentam alterar
o valor de mat
a última operação é válida pois estamos atribuindo um valor int para
uma variável do tipo int
*/
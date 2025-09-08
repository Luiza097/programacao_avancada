// ALTERNATIVA A
void f( ){
void *s;
s = malloc(50);
free(s);
}
// Não apresenta erro de vazamento de memória

// ALTERNATIVA B
int f( ){
float *a;
return 0;
}
// Nem faz alocamento de memória

// ALTERNATIVA C
int f(char *data){
void *s;
s = malloc(50);
int size = strlen(data);
if (size > 50)
return(-1);
free(s);
return 0;
}
/* Apresenta erro de vazamento de memória. Se o data passado
por parâmetro tiver tamanho > 50, ele irá entrar no if e o
código irá retornar -1. Ao fazer esse retorno, o código não irá
ler as linhas restantes da função, e portanto não fara o free, o
que causa um erro de vazamento de memória.
*/

// ALTERNATIVA D
int *f(int n){
int *num = malloc(sizeof(int)*n);
return num;
}
int main(void){
int *num;
//num = f(10); Deixei comentado só para não ficar com mensagem de erro no código
free(num);
return 0;
}
// Não apresenta erro de vazamento de memória

// ALTERNATIVA E
void f(int n){
char *m = malloc(10);
char *n = malloc(10);
free(m);
m = n;
free(m);
free(n);
}
// Apresenta erro de double free, mas não apresenta erro de
// vazamento de memória
#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v){
  int i;
  for (i = 0; i < TAM; i++){
  if (vetor[i] == v)
  return i;
  }
  return -1;
}
int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2;
  if (v == vetor[m])
  return m;
  if (i >= f)
  return -1;
  if (v > vetor[m])
  return funcao2(vetor, v, m+1, f);
  else
  return funcao2(vetor, v, i, m-1);
}
  int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}

// I. O resultado da impressão na linha 24 é: 7 - 7.
// - O resultado da impressão realmente é 7 - 7, o que se refere à posição do elemento 15
//   no vetor. V

// II. A função funcao1, no pior caso, é uma estratégia mais rápida do que a funcao2.
// - A funcao2 é uma estratégia mais rápida, pois usa a recursivadade ao invés de fazer uma
// busca por todo o vetor. F

// III. A função funcao2 implementa uma estratégia iterativa na concepção do algoritmo.
// Não há iteração na funcao2, o que ocorre, entretanto, é uma recursividade. F

// Portanto: 
// IV. I, apenas.

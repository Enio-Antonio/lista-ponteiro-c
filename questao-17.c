#include <stdio.h>
#include <stdlib.h>

int compara(int *a, int *b){
    int da = *a;
    int db = *b;

    if (da < db){
      return 1;
    }

    if (da > db){ 
      return -1;
    }

    return 0;
}


int main(){
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);

  int * vetor = malloc(n * sizeof(int));
  
  for(int i = 0; i<n; i++){
      vetor[i] = i + 1;
  }

  for(int i = 0; i<n; i++){
      printf("%d\n", vetor[i]);
  }
  printf("\n");

  void (*ordenar_decrescente)(int *, int, int*, (int*, int*));
  //void (*ptr_zerar)(int*);
  ordenar_decrescente = qsort;

  ordenar_decrescente(vetor, n, sizeof(int), compara);

  for(int i = 0; i<n; i++){
      printf("%d\n", vetor[i]);
  }
  
  free(vetor);
	
  return 0;
}

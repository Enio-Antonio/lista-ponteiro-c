#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compara(int *a, int *b){
    int da = *a;
    int db = *b;

    if (da < db){
   return -1;
    }

    if (da > db){ 
  return 1;
    }

    return 0;
}

int main() {
  clock_t start, end;
  clock_t start_2, end_2;
  float cpu_time_used;
  float time_2;

  int n = 5;

  start = clock();

  int* vet = malloc(n * sizeof(int));
  
  for(int i = 0; i<n; i++){
      vet[i] = n-i;
  }

  qsort(vet, n, sizeof(int), compara);

  free(vet);
  
  end = clock();
  cpu_time_used = ((float)(end - start)) / CLOCKS_PER_SEC;

  printf("Tempo de ordenação sem ponteiros: %f segundos\n", cpu_time_used);

  // Segundo processo  
  
  start_2 = clock();

  int * vetor = malloc(n * sizeof(int));

  for(int i = 0; i<n; i++){
      vetor[i] = n-i;
  }

  void (*ordenar_com_ponteiro)(int *, int, int*, (int*, int*));
  
  ordenar_com_ponteiro = qsort;

  ordenar_com_ponteiro(vetor, n, sizeof(int), compara);

  free(vetor);
  
  end_2 = clock();

  time_2 = ((float)(end_2 - start_2)) / CLOCKS_PER_SEC;

  printf("Tempo de ordenação com ponteiros: %f segundos\n", time_2);
  
  return 0;
}

// A diferença de tempo se deve ao segundo processo ser feito 
// um ponteiro para a função qsort.  

// Um ponteiro é mais eficiente do que chamar diretamente uma    
// função, pois sua passagem por ponteiro pode evitar algumas    
// operações de chamada de função e pode ser otimizada pelo      
// compilador.
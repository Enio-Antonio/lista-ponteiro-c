#include <stdio.h>
#include <stdlib.h>

int compara(float *a, float *b){
    float da = *a;
    float db = *b;

    if (da < db){
   return -1;
    }

    if (da > db){ 
  return 1;
    }

    return 0;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    float* vet = malloc(n * sizeof(float));
    for(int i = 0; i<n; i++){
        vet[i] = n-i;
    }
    printf("Ordem original:\n");
    for(int i = 0; i<n; i++){
        printf("%f\n", vet[i]);
    }

    qsort(vet, n, sizeof(float), compara);

    printf("Ordem crescente:\n");
    for(int i = 0; i<n; i++){
        printf("%f\n", vet[i]);
    }

    free(vet);

    return 0;
}
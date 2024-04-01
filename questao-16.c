#include <stdio.h>
#include <stdlib.h>

int compara(float *a, float *b){ // Declaração da função auxiliar, que definirá como a função qsort deve ordenar o vetor.
    float da = *a;
    float db = *b;

    if (da < db){
   return -1; // Retorna -1 se o primeiro for menor que o segundo.
    }

    if (da > db){ // Retorna 1 se o primeiro for maior que o segundo.
  return 1;
    }

    return 0; // Retorna 0 se os dois números forem iguais.
}

int main() {
    int n; // n será o tamanho do vetor, ou seja, o tanto de memória que será alocada em vet.
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    float* vet = malloc(n * sizeof(float)); // Alocação dinâmica de memória em vet.
    for(int i = 0; i<n; i++){
        vet[i] = n-i; // Preenchimento vet em ordem decrescente.
    }
    printf("Ordem original:\n");
    for(int i = 0; i<n; i++){
        printf("%f\n", vet[i]); // Somente para mostrar o vet já alocado mas sem ordenação.
    }

    qsort(vet, n, sizeof(float), compara); // Chamada da função qsort, que vai atuar ordenando o vetor vet, com base na função compara.

    printf("Ordem crescente:\n");
    for(int i = 0; i<n; i++){
        printf("%f\n", vet[i]); // Somente para mostrar o vetor já ordenado.
    }

    free(vet); // Liberação da memória reservada dinamicamente para vet.

    return 0;
}
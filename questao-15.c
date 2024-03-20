#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float temp = *a;
    *a=*b;
    *b=temp;
}

void ordena_crescente(float *vet, int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(vet[j]>vet[j+1]){
                troca(&vet[j],&vet[j+1]);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    float* vet = (float*) (malloc(n*sizeof(float)));
    for(int i = 0;i<n;i++){
        vet[i]=n-i;
    }
    printf("Ordem original:\n");
    for(int i = 0; i<n;i++){
        printf("%f\n",vet[i]);
    }
    ordena_crescente(vet,n);
    printf("Ordem crescente:\n");
    for(int i = 0; i<n;i++){
        printf("%f\n",vet[i]);
    }
    free(vet);
    return 0;
}

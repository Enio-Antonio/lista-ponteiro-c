#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b){
    float fa = *((float *)a);
    float fb = *((float *)b);
    if (fa < fb) return -1;
    if (fa > fb) return 1;
    return 0;
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
    //ordena_crescente(vet,n);
    qsort(vet,n,sizeof(float),compara);
    printf("Ordem crescente:\n");
    for(int i = 0; i<n;i++){
        printf("%f\n",vet[i]);
    }
    free(vet);
    return 0;
}

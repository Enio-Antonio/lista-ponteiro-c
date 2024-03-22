#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int* vet1, int* vet2, int* res, int n){
    for(int i = 0; i<n; i++){
        res[i]=vet1[i]+vet2[i];
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int* vet1 = (int*)malloc(n* sizeof(int));
    int* vet2 = (int*)malloc(n* sizeof(int));
    int* res = (int*)malloc(n* sizeof(int));
    for(int i = 0; i<n; i++){
        vet1[i] = i;
    }
    for(int i = 0; i<n; i++){
        vet2[i] = i;
    }
    for(int i = 0; i<n; i++){
        printf("Vet1[%d] = %d\n",i,vet1[i]);
    }
    for(int i = 0; i<n; i++){
        printf("Vet2[%d] = %d\n",i,vet2[i]);
    }
    soma_vetores(vet1,vet2,res,n);
    for(int i = 0; i<n; i++){
        printf("res[%d] = %d\n",i,res[i]);
    }
    free(vet1);
    free(vet2);
    free(res);
    
    return 0;
}

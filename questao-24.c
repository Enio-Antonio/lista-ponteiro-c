#include <stdio.h>
#include <stdlib.h>
int main() {
    char **m;
    char **p;
    long estado = 0;
    int n = 8;
    m = malloc(n*sizeof(char*));
    m[0]=malloc(n*n*sizeof(char));
    for(int i = 1;i<n;i++){
        m[i]=m[i-1]+n;
    }
    p = malloc(n*sizeof(char*));
    p[0]=malloc(n*n*sizeof(char));
    for(int i = 1;i<n;i++){
        p[i]=p[i-1]+n;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j%2==0){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    printf("Matriz que será atribuida ao long:\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            estado = estado << 1; //O valor de estado é deslocado em um para a esquerda e o valor atualizado é atribuido a variavel original.
            estado = estado | m[i][j]; // Ocorre uma comparação entre o valor do bit presente na variavel estado com o valor da matriz na linha e coluna da iteração, como estado está apenas com zeros, o valor do bit será atualizado e dependerá apenas do valor contido na matriz.
        }
    }
    //Operação Inversa
    for (int i = n-1;i>=0;i--) {
        for (int j = n-1;j>=0;j--) {
            p[i][j] = estado & 1; // caso o valor em "estado" seja 1, o valor naquela posição será 1. Senão, será 0. Operação "AND"
            estado = estado >> 1; //desloca os bits de estado para a direta em uma posição.
        }
    }
    printf("Matriz resultante do long:\n");
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    free(m[0]);
    free(m);
    free(p[0]);
    free(p);
    return 0;
}

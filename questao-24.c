#include <stdio.h>
#include <stdlib.h>
int main() {
    char **m;
    long estado = 0;
    int n = 8;
    m = malloc(n*sizeof(char*));
    m[0]=malloc(n*n*sizeof(char));
    for(int i = 1; i<n;i++){
        m[i]=m[i-1]+n;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            if(j%2==0){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
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
    free(m[0]);
    free(m);
    return 0;
}

// Para modificar o estado de um elemento, rode o programa e digite as 
// coordenadas do elemento o qual você deseja modificar e após isso, o 
// estado.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *** matriz;
  int nl, nc, np;
  int acrescimo = 1;
  int resposta;
  int saida = 1;

  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &nl);

  printf("Digite o número de colunas da matriz: ");
  scanf("%d", &nc);

  printf("Digite o número de planos da matriz: ");
  scanf("%d", &np);

  printf("\n");


  // Inicialização da matriz
  matriz = malloc(nl * sizeof(int**));

  for(int i = 0; i < nl; i++){
    matriz[i] = malloc(nc * sizeof(int*));
  }

  for(int i = 0; i < nl; i++){
    for(int c = 0; c < nc; c++){
      matriz[i][c] = malloc(np * sizeof(int));
    } 
  }


  // Preenchimento da matriz.
  for(int i = 0; i < nl; i++){
    for(int c = 0; c < nc; c++){
      for(int p = 0; p < np; p++){
        matriz[i][c][p] = 0;
      }
    } 
  }

  // Interação com o usuário
  while(saida != 0){
    printf("O você deseja imprimir?\n 1 para plano ou 0 para linha.\nSe quiser mudar o estado de um elemento digite -1\n");
    scanf("%d", &resposta);
  
  
    if (resposta == 1){
      printf("Qual plano você deseja imprimir (lembre-se de que as posições são reduzidas em 1)?\n");
      int plano;
      scanf("%d", &plano);
      for(int i = 0; i < nl; i++){
        for(int c = 0; c < nc; c++){
          printf("%d ", matriz[i][c][plano]);
        } 
        printf("\n");
      }
      printf("\n");
    }
    else if(resposta == 0){
  
      printf("Qual linha você deseja imprimir (lembre-se de que as posições são reduzidas em 1)?\n");
  
      int linha;
      scanf("%d", &linha);
  
      for(int c = 0; c < nc; c++){
        for(int p = 0; p < np; p++){
          printf("%d ", matriz[linha][c][p]);
        } 
        printf("\n");
      }
  
    }
    else if(resposta == -1){
  
      int c1, c2, c3, estado;
  
      printf("Digite as coordenadas no formato: linha coluna plano\n");
      scanf("%d %d %d", &c1, &c2, &c3);
      printf("Digite o estado:\n");
      scanf("%d", &estado);
  
      if (estado != 1 && estado != 0){
        printf("Forneça um valor válido para o estado.");
      }
      else{
        matriz[c1][c2][c3] = estado;
      }
    }

    printf("Digite 0 para finalizar o programa ou 1 para continuar.\n");
    scanf("%d", &saida);
  }

  // Liberação de memória
  for (int i = 0; i < nl; i++) {
    for (int c = 0; c < nc; c++) {
        free(matriz[i][c]);
    }
    free(matriz[i]);
  }
  
  free(matriz);

  return 0;
}

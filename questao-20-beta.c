#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int ** matriz_1, int ** matriz_2, int ** matriz_c, int nl_1, int nc_1, int nc_2){
  int aux_1 = 0, aux_c_1 = 0;
  int aux_2 = 0, aux_l_2 = 0;
  
  for(int i = 0; i < nl_1; i++){
    for(int c = 0; c < nc_2; c++){
      matriz_c[i][c] = 
        matriz_1[aux_c_1][aux_1] * matriz_2[aux_2][aux_l_2] 
        + 
        matriz_1[aux_c_1][aux_1 + 1] * matriz_2[aux_2+1][aux_l_2]
        + 
        matriz_1[aux_c_1][aux_1 + 2] * matriz_2[aux_2 + 2]      [aux_l_2];
    }
    printf("aux_c_1 => %d\n",aux_c_1);
    printf("aux_l_2 => %d\n",aux_l_2);
    
    aux_c_1++;
    aux_l_2++;

    aux_1 = 0;
    aux_2 = 0;
    
  }
}

int main(void) {
  int nl_1 = 2, nc_1 = 3, i;
  int nl_2 = 3, nc_2 = 4;
  int nl_c = 2, nc_c = 4;
  int num = 1;
  int **matriz_1;
  int **matriz_2;
  int ** matriz_c;

  matriz_1 = malloc(nl_1 * sizeof(int*));

  for(i = 0; i < nl_1; i++){
    matriz_1[i] = malloc(nc_1 * sizeof(int));
  }
  
  for(i = 0; i < nl_1; i++){
    for (int c = 0; c < nc_1; c++){
      matriz_1[i][c] = num;
      num++;
    }
  }

  for(i = 0; i < nl_1; i++){
    for (int c = 0; c < nc_1; c++){
      printf("%d ", matriz_1[i][c]);
    }
    printf("\n");
  }

  printf("\n");
  // Matriz 2
   
  matriz_2 = malloc(nl_2 * sizeof(int*));

  for(i = 0; i < nl_2; i++){
    matriz_2[i] = malloc(nc_2 * sizeof(int));
  }

  for(i = 0; i < nl_2; i++){
    for (int c = 0; c < nc_2; c++){
      matriz_2[i][c] = num+1;
      num++;
    }
  }

  for(i = 0; i < nl_2; i++){
    for (int c = 0; c < nc_2; c++){
      printf("%d ", matriz_2[i][c]);
    }
    printf("\n");
  }
  printf("\n");

  // Matriz C

  matriz_c = malloc(nl_c * sizeof(int*));

  for(i = 0; i < nl_c; i++){
    matriz_c[i] = malloc(nc_c * sizeof(int));
  }

  for(i = 0; i < nl_c; i++){
    for (int c = 0; c < nc_c; c++){
      printf("%d ", matriz_c[i][c]);
    }
    printf("\n");
  }
  printf("\n");

  // Testando a função

  multiplica_matrizes(matriz_1, matriz_2, matriz_c, nl_1, 
    nc_1, nc_2);

  for(i = 0; i < nl_c; i++){
    for (int c = 0; c < nc_c; c++){
      printf("%d ", matriz_c[i][c]);
    }
    printf("\n");
  }
  
  // Liberando a memória

  for(i = 0; i < nl_2; i++){
    free(matriz_2[i]);
  }
  for(i = 0; i < nl_1; i++){
    free(matriz_1[i]);
  }
}
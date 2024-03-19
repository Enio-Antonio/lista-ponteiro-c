// ◦ x for declarado como char?
   // x + 1 -> 4093 == x[1]
   // x + 2 -> 4094 == x[2]
   // x + 3 -> 4095 == x[3] (lixo de memória)

// ◦ x for declarado como int?
   // x + 1 -> 4094 == x[1]
   // x + 2 -> 4096 == x[2]
   // x + 3 -> 4098 == x[3]

// ◦ x for declarado como float?
  //  x + 1 -> 4096 == x[1]
  //  x + 2 -> 4100 == x[2]
  //  x + 3 -> 4104 == x[3]

// ◦ x for declarado como double?
  //  x + 1 -> 4100 == x[1]
  //  x + 2 -> 4108 == x[2]
  //  x + 3 -> 4116 == x[3]

#include <stdio.h>

int main(){
    char x[4]; // Basta mudar o tipo de dado para fazer os outros testes. Além disso, é necessário analisar a arquitetura
    // usada usando sizeof(char) e etc.
    int aux = 1;

    for(int i = 0; i < 3; i++){
        printf("%p\n", x + aux);
        aux++;
    }
}
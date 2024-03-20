// "Ponteiros para funções podem ser passados como argumentos para outras funções, e a função apontada pode ser invocada a partir de seu      
// ponteiro. Um exemplo prático desta capacidade é seu uso em uma rotina de ordenação de elementos de um arranjo.[..] Ponteiros para funções 
// tornam-se interessantes quando o programador não pode determinar qual função deve ser executada em uma dada situação a não ser durante a 
// execução do programa. Em tais casos, o trecho do programa referenciando esta ``função variável'' pode ser escrito em termos de ativação 
// de uma função através de ponteiros para funções, os quais são corretamente inicializados em tempo de execução."

// Referência: https://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node144.html, Ivan L. M. Ricarte 2003-02-14

#include <stdio.h>

void zerar(int *num){ // Função exemplo que simplesmente atribui zero a um inteiro.
    *num = 0;
}

int main(){
    int num = 15; // Variável de exemplo
    printf("num = %d antes da função.\n", num);
    
    void (*ptr_zerar)(int*); // Inicialização do ponteiro ptr_zerar para a função zerar, com o argumento do tipo int *.
    
    ptr_zerar = zerar; // ptr_zerar aponta para a função zerar.
    
    ptr_zerar(&num); // ptr_zerar recebe o endereço de memória de num como argumento.
    
    printf("num = %d depois da função.\n", num);
}


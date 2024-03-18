#include <stdio.h>

int main() {
    int pulo[5]={1,2,3,4,5};
    printf("pulo = %p\n", pulo);
    printf("*(pulo+2) = %d\n", *(pulo+2));
    printf("*(pulo+4) = %d\n", *(pulo+4));
    printf("pulo+4 = %p\n", pulo+4);
    printf("pulo+2 = %p\n", pulo+2);
    printf("&pulo[2] = %p\n",&pulo[2]);
    // as opções corretas são a 1 e 4, pois a primeira referencia o valor do elemento e a última a sua posição.
}

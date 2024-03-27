#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  int i = 0;
  while (a) {
  x = x | b;
  y = y ^ a;
  z = z & (a+b);
  a = a >> 1;
  b = b << 1;
  i++;
  }
  printf ("%d %d %d\n", x, y, z);
  printf("Iterações realizadas: %d\n",i);
  printf("Tamanho do int em bits: %d",sizeof(int));
  return 0;
}
// A saída para o programa é "15 13 0".
//Para os valores a=10 e b=1, são realizadas 4 iterações.
//Na operação "x=x|b", é verificado bit a bit e comparados os seus valores, a operação é de a OR, ou seja, é verificado os valores dos 4 bits de cada um e o resultante para aquela posição do bit será 1 quando algum dos dois forem 1, e 0 quando nenhum for. No caso apresentado, x=1010 e b=0001 ou seja, para a primeira iteração o resultado será: 1011 que é igual a 11.
// Para a operação "y=y^a", a operação é a de "XOR", ou seja, o bit resultante da comparação será 1 quando os valores não forem iguais, como exemplo temos a primeira iteração em que y=0001 e a=1010,o resultado desse operação seria 1011, que é igual a 11.
//Na operação "z=z&(a+b)", "&" representa a operação "AND" bit a bit, a+b=11, e então é ocorre a comparação e o valor no bit será 1 caso ambos os valores sejam 1. Exemplo: z=1011 e (a+b)=1011, o resultado seria 1011 que é igual a 11.
//Na operação "a=a>>1" os bits são deslocados em uma posição para a esquerda, ou seja, no exemplo      a=1010 a operação resultaria em a=0101.
//Na operação "b=b<<1", os bits são deslocados em uma posição para a direita, ou seja, no exemplo       b=0001, a operação resultaria em b=0010.

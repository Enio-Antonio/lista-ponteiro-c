#include <stdio.h>
int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i); //conta as iterações e a posição em que o vetor está
  printf(" vet[%d] = %.1f",i, vet[i]); //mostra a posiçao do vetor e o valor contido nele durante a iteração com um máximo de 1 digito após a vírgula, devido ao uso do %.1f
  printf(" *(f + %d) = %.1f",i, *(f+i)); // nesse caso, primeiro é exibido o valor de i, que é o valor da iteração, em seguida é exibido o valor do ponteiro *(f+i), o ponteiro *f sempre vai assumir o primeiro valor contido nele, que no caso é o primeiro elemento do vetor vet[], e de acordo com a iteração ele vai percorrendo os outros valores.
  printf(" &vet[%d] = %X",i, &vet[i]); // nessa linha, o valor do endereço de memória do vetor vet é mostrado de acordo com a posição de cada elemento
  printf(" (f + %d) = %X",i, f+i); // nessa linha, o valor mostrado é a iteração do momento e em seguida o endereço de memória no ponteiro f em cada iteração, percorrendo cada valor seu. Além disso, é possível verificar que os resultados encontrados são iguais quando comparados ao endereço de memória do vetor vet, isso se deve ao fato de que f=vet, logo os endereços de memória para cada elemento serão iguais.
  printf("\n");
  }
}

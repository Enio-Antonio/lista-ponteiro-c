#include <stdio.h>

int main(void) {
	int i = 5; int* p;
	p = &i;
	printf("%p %p %d %d %d %d\n", p, p + 1, *p + 2, **&p, 3 * *p, **&p + 4);

	// &i = 4094

	// p == 4094 (endereço de memória de i).
	// p + 1 == 4096 (endereço de memória de i mais dois bytes do número inteiro).
	// *p + 2 == 7 (p desrefenciado assume o valor de i e é adicionado 2).
	// **&p == 5 (endereço de p, depois é desreferenciado e desreferenciado novamente, quando assume o valor de i)
	// 3 * *p == 15 (p desreferenciado * 3)
	// **&p + 4 == 9 (endereço de p, depois é desreferenciado e desreferenciado novamente, quando assume o valor de i e =+ 4)
}	
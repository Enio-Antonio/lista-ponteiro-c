#include <stdio.h>

int main(void) {
	int i = 3; int j = 5;
	int* p; int *q;
	p = &i;
	q = &j;

	p == &i; // O resultado será True. A variável "p", se usada sem o "*", se refere ao endereço de memória da variável "i", da mesma forma, &i retorna o endereço de memória.

	*p - *q; // O resultado será -2. Ao usar o asterisco, o ponteiro é desreferenciado, assumindo o valor contido no endereço de memoria que ele aponta.

	**&p; // O resultado será 3. A explicação pode ser dividida em três partes: 
		  // &p -> Retorna o endereço de memória na qual está referenciada a variável ponteiro p.
		  // *&p -> Retorna o endereço o qual p apontava anteriormente, no caso da variável i.
		  // **&p -> Há a desreferencia do endereço de i, logo o valor se resultante é 3.

	3 - *p / (*q) + 7; // O resultado será 9.4. *p e *q são ponteiros dereferenciados, logo assumiram os valores de i e j, respectivamente. Então a expressão se torna 
					   // 3 - 3 / 5 + 7 == 9.4.
	
	return 0;
}
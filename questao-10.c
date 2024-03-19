#include <stdio.h>
void main() {
	int const * x = 3;
	printf("%d", ++(*x));
}

// Não é possível compilar esse programa sem erros. Como x é uma variável do tipo int const *, não é possível inicializá-la com o valor 3, além disso, não é possível somar um inteiro a ela, já x é do tipo const. 
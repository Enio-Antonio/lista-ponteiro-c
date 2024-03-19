#include <stdio.h>

int main() {
	int vet[] = { 4, 9, 13 };
	int i;
	for (i = 0; i < 3; i++) {
		printf("%d ", *(vet + i));
	}
}

// Imprime no console os valores contidos em todas as posições do vetor. Ao invés de *(vet + i), o programa poderia usar vet[i], o que resultaria no mesmo.

// --------------------------------------------------------------------------------------------------------

#include <stdio.h>

int main() {
	int vet[] = { 4, 9, 13 };
	int i;
	for (i = 0; i < 3; i++) {
		printf("%X ", vet + i);
	}
}

// Esse programa imprime no console o endereço de memória de cada posição do vetor.
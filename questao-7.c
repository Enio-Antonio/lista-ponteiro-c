#include <stdio.h>

int main() {
	int mat[4], *p, x;

	p = mat + 1; // p recebe o endereço de memória da posição 1 do vetor mat.
	p = mat; // p recebe a posição 0 do vetor mat.
	p = mat; // Essa está duplicada, acredito que tenha sido erro de digitação.
	x = (*mat); // A variável x recebe o elemento contido na primeira posição do vetor mat, visto *mat desreferencia.

	return(0);
}
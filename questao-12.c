#include <stdio.h>

int main() {
	float aloha[10], coisas[10][5], * pf, value = 2.2;
	int i = 3;

	aloha[2] = value; // Válido.
	scanf("%f", &aloha); // Válido. O recebido será alocado na posição 0 do vetor aloha.
	aloha = "value"; // Inválido. Não é possível atribuir valores a um vetor sem especificar a posição.
	printf("%f", aloha); // Inválido. Dependendo do sistema, o valor impresso pode ser 0, porém isso é somente um tentativa de encaixar o valor de memória da posição 0 em um float.
	coisas[4][4] = aloha[3]; // Válido. 
	coisas[5] = aloha; // Inválido. Não é possível atribuir um vetor a outro.
	pf = value; // Inválido. pf deve receber um endereço de memória.
	pf = aloha; // Válido. pf receberá o endereço de memória da posição 0 do vetor aloha.
}
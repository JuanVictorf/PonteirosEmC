#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 27; // Criando vari�vel chamada valor e atribuindo 27
	int *ptr; // Criando um ponteiro do tipo int chamado ptr
	ptr = &valor; // Atribuindo o endere�o da vari�vel Valor ao ponteiro;
	
	printf("Utilizando ponteiros \n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x\n", &valor);
	printf("Endereco da variavel ptr: %x\n", ptr);
	printf("Conteudo da variavel ponteiro: %d\n", *ptr);
	
	// Para chamar o endereco da mem�ria basta colocar %x, &nomeDaVariavel
	// Para chamar o valor atribu�do ao ponteiro, basta colocar %d, *ptr

	
}

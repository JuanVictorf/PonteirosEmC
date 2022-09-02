#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 27; // Criando variável chamada valor e atribuindo 27
	int *ptr; // Criando um ponteiro do tipo int chamado ptr
	ptr = &valor; // Atribuindo o endereço da variável Valor ao ponteiro;
	
	printf("Utilizando ponteiros \n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x\n", &valor);
	printf("Endereco da variavel ptr: %x\n", ptr);
	printf("Conteudo da variavel ponteiro: %d\n", *ptr);
	
	// Para chamar o endereco da memória basta colocar %x, &nomeDaVariavel
	// Para chamar o valor atribuído ao ponteiro, basta colocar %d, *ptr

	
}

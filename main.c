#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	
	empilhar(1);
	empilhar(2);
	exibir();
	
	printf("\n-----------\n");
	
	esvaziar();
	exibir();

	return 0;
	
}

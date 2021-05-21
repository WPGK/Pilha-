#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM_PILHA 3

int pilha[TAM_PILHA], topo=0;

void empilhar(int valor){
	
	if (cheia()){
		
		printf("pilha cheia ");
		
	}
	else{
		pilha[topo] = valor;
	topo++;
	}
	
	
}

int desempilhar(){
	
		if (vazia()){
		
		printf("pilha vazia! ");
		
	}
	else{
	 topo--;
	 return pilha[topo];
		
}
/*	int Itemretirado;
	topo--;
	intemRetirado = pilha[topo];
	pilha[topo] = 0;
	return pilha[topo];*/
	

return 0;
}
	/*int pilha[TAM_PILHA] = volor;
	topo++;*/
	
void exibir(){
	int i;
	if(vazia()){
		printf("Pilha vazia!");

  }
  else{

    for(i=0; i<topo; i++){
      printf("%i\n", pilha[i]);
    }

  }
}

int vazia(){
	
	if(topo ==0){
		return 1;
	}
		else{
			return 0;	
	}
}

int cheia(){
	
	if(topo == TAM_PILHA){
		return 1;
	}
	else{
		return 0;
	}
}

void esvaziar(){
	
	while(!vazia()){
		desempilhar();
	}
}


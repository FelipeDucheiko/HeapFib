#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "fib.h"


int G = 0;
void imprimir( NoHeapFib* No, NoHeapFib * pai){
	printf("Elemento %d: %d   ", G++,  No->chave);

/*	if( No->filho != NULL){
		imprimir( No->filho, No->filho);
	}
*/
	if( No->dir != pai){
		imprimir( No->dir, pai);
	}
}

void imprimirHeapFib(HeapFib* H){
	G = 1;
	imprimir(H->noMin, H->noMin);
}	

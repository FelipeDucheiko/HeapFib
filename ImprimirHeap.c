#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "fib.h"

void imprimir( NoHeapFib* No, NoHeapFib * pai){
	printf("%d\n", No->chave);

	if( No->filho != NULL){
		imprimir( No->filho, No->filho);
	}

	if( No->dir != pai){
		imprimir( No->dir, pai);
	}	
}

void imprimirHeapFib(HeapFib* H){
	imprimir(H->noMin, H->noMin);
}	

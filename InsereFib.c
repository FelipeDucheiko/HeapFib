#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "fib.h"


NoHeapFib * insereFib( HeapFib* H,int chave){
	assert(H);

	NoHeapFib* novoNo = (NoHeapFib*) malloc( sizeof( NoHeapFib));
	if(novoNo == NULL) return novoNo;

	novoNo->pai = NULL;
	novoNo->filho = NULL;
	novoNo->chave = chave;
	novoNo->grau = 0;
	novoNo->marca = 0; 


	if ( H->noMin == NULL){
		novoNo->esq = novoNo;
		novoNo->dir = novoNo;
		H->noMin = novoNo;
	}
	else{
		novoNo->esq = (H -> noMin)->esq;
		(H -> noMin)->esq = novoNo;
		novoNo->dir = (H -> noMin);
		(novoNo->esq)->dir = novoNo;

		if ( chave < (H -> noMin)->chave){
			(H -> noMin) = novoNo;
		}
	}

	(H -> qtdNos)++;
	return novoNo;
}

void insereFibNoPronto( HeapFib* H, NoHeapFib* No){
	assert( H);

	if ( H->noMin == NULL)
		return;

	No->esq = (H -> noMin)->esq;
	(H -> noMin)->esq = No;
	No->dir = (H -> noMin);
	(No->esq)->dir = No;

	if ( No->chave < (H -> noMin)->chave)
			(H -> noMin) = No;	

}

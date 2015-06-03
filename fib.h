#ifndef FIB_H
#define FIB_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct NoHeapFib{

	struct NoHeapFib* pai; //ponteiro para o nó pai
	struct NoHeapFib* filho; //ponteiro para um nó filho
	struct NoHeapFib* esq; //ponteiro para o nó irmão esquerdo
	struct NoHeapFib* dir; //ponteiro para o nó irmão direito
	int chave;
	int grau; //quantidade de filhos do nó
	int marca; //campo booleano que determina se o nó já 

} NoHeapFib;


typedef struct HeapFib
{
	NoHeapFib * noMin;
	int qtdNos;
} HeapFib;



HeapFib * makeHeapFib();

void insereFib( HeapFib * H,int chave);

void insereFibNoPronto( HeapFib* H, NoHeapFib* No);


#endif

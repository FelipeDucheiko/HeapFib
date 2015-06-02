#include "fib.h"
#include <stdio.h>
#include <assert.h>

HeapFib * makeHeapFib()
{
	HeapFib * no = (HeapFib *) malloc(sizeof(HeapFib));
	if(!no) return NULL;

	no -> noMin = NULL;
	no -> qtdNos = 0;

	return no;

}


NoHeapFib * extractMin(HeapFib * H)
{
	assert(H);

	NoHeapFib * ext = H -> noMin;
	NoHeapFib * filho = ext -> filho;
	NoHeapFib * aux = NULL;

	if(!ext)
	{
		if(!filho)
		{
			aux = filho -> esq;

			(ext -> esq) -> dir = filho;
			filho -> esq = ext -> esq;

			(ext -> dir) -> esq = aux;
			aux -> dir = ext -> dir;

			while(aux != filho)
			{
				aux -> pai	= NULL;
				aux = aux -> esq;
			}

			filho -> pai = NULL;

			
		}
	}


}



int main (void)
{

}
#include "fib.h"
#include <stdio.h>


HeapFib * makeHeapFib()
{
	HeapFib * no = (HeapFib *) malloc(sizeof(heap));
	if(!no) return NULL;

	no -> noMin == NULL;
	no -> qtdNos = 0;

	return no;

}




int main (void)
{

}
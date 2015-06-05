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

void heapFibLink(HeapFib * H, NoHeapFib * y, NoHeapFib * x)
{
	assert(H);

	if (H -> noMin == y)
		H -> noMin = y -> dir;

	 (y -> dir) -> esq = y -> esq;
	 (y -> esq) -> dir = y -> dir;

	 if(x -> filho == NULL)
	 {
	 	x -> filho = y;
	 	y -> esq = y;
	 	y -> dir = y;
	 }

	 else
	 {
	 	y -> dir = x -> filho;
	 	((x -> filho) -> esq) -> dir = y;
	 	y -> esq = (x -> filho) -> esq;
	 	(x -> filho) -> esq = y;

	 }

}


void consolidar(HeapFib * H)
{	
	NoHeapFib * a[H->qtdNos];
	int i, grau;
	NoHeapFib * x, * y, * troca;

	for(i = 0; i < H -> qtdNos; i++)
	{
		a[i] = NULL;
	}

	NoHeapFib * no = H -> noMin;

	do{

		x = no;
		grau = x -> grau;

		while(a[grau])
		{
			y = a[grau];
			if (x -> grau > y -> grau)
			{
				troca = x;
				x = y;
				y = troca;
			}
			/*parei aquiiiio tem que chamar heapfiblink linha 11*/

			heapFibLink(H, y, x);

			a[grau] = NULL;
			grau++;
		}

		a[grau] = x;

		no = no -> dir;

	}while(no != H -> noMin);


	H -> noMin = NULL;

	for(i = 0; i < H -> qtdNos; i++)
	{
		if( a[i] )
		{
			if(!(H -> noMin))
			{
				H -> noMin = a[i];
				a[i] -> esq = a[i];
				a[i] -> dir = a[i];
			}
			else
			{
				a[i] -> esq  = (H -> noMin) -> esq;
				
				(H -> noMin) -> esq = a[i];
				a[i] -> dir = (H -> noMin);

				(a[i] -> esq) -> dir = a[i];


				if(a[i] -> chave < (H -> noMin) -> chave)
					H -> noMin = a[i];

			}
		}
	}

}


NoHeapFib * extractMin(HeapFib * H)
{
	assert(H);

	NoHeapFib * ext = H -> noMin;
	NoHeapFib * filho = ext -> filho;
	NoHeapFib * aux = NULL;

	if(ext)
	{
		if(filho)
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
			ext -> dir = filho;

		}

		if(ext == ext -> dir)
			H -> noMin = NULL;
		else
		{
			H -> noMin = ext -> dir;
			consolidar(H);
		}

		H -> qtdNos--;

	}

	return ext;
}
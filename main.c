#include "fib.h"
#include <stdio.h>


int main (void)
{

	HeapFib * H = makeHeapFib();

	if(!H) puts("H = NULL");

	if(!H -> noMin)
		puts("H -> noMin = NULL");


	imprimirHeapFib(H);

	NoHeapFib * no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );

	NoHeapFib * no;

	insereFib(H, 8);

	
	no = insereFib(H, 10);
	insereFib(H, 4);
	insereFib(H, 2);
	insereFib(H, 1);

	imprimirHeapFib(H);
	puts("\n");



	decreaseKey(H, no , 9);

	imprimirHeapFib(H);
	puts("\n");



	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );

	decreaseKey(H, no , 5);
	insereFib(H, 3);
	puts("imprimirHeapFib");
	imprimirHeapFib(H);
	puts("\n");

	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );


	puts("imprimirHeapFib");
	imprimirHeapFib(H);
	puts("\n");


	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );


	puts("imprimirHeapFib");
	imprimirHeapFib(H);
	puts("\n");


	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );

	puts("imprimirHeapFib");
	imprimirHeapFib(H);
	puts("\n");


	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );


	puts("imprimirHeapFib10");
	imprimirHeapFib(H);
	puts("\n");


	no2 = extractMin(H);
	printf("\nextraido = %d\n\n", no2 == NULL ? 0 : no2 -> chave );



	return 0;
}
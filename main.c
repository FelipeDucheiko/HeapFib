#include "fib.h"
#include <stdio.h>


int main (void)
{

	HeapFib * H = makeHeapFib();

	NoHeapFib * no;

	no = insereFib(H, 8);
	insereFib(H, 6);
	insereFib(H, 4);


	decreaseKey(H, no , 5);



	no = extractMin(H);

	printf("%d\n", no -> chave );


	no = extractMin(H);

	printf("%d\n", no -> chave );

	no = extractMin(H);

	printf("%d\n", no -> chave );

	no = extractMin(H);

	printf("%d\n", no -> chave );

	return 0;
}
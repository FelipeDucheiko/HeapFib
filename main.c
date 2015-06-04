#include "fib.h"
#include <stdio.h>


int main (void)
{

	HeapFib * H = makeHeapFib();

	NoHeapFib * no;

	no = insereFib(H, 8);
	insereFib(H, 6);
	insereFib(H, 4);


	decreaseKey(H, no , 7);



	NoHeapFib * no2 = extractMin(H);

	printf("%d\n", no2 -> chave );


	NoHeapFib * no3 = extractMin(H);

	printf("%d\n", no3 -> chave );

	NoHeapFib * no4 = extractMin(H);

	printf("%d\n", no4 -> chave );

	NoHeapFib * no5 = extractMin(H);

	printf("%d\n", no5 -> chave );

	return 0;
}
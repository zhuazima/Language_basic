#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int a = 12;
	int b = 24;

	const int* p = &a;
	printf("%d\n", *p);
	//*p = 23;
	a = 100;
	printf("%d\n", *p);

	p = &b;
	printf("%d\n", *p);

	int* const p = &a;

	// int const* const p
	const int* const p = &a;
	// *p = 12;
	// p = &b;


	return 0;
}
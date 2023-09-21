#include <stdio.h>
#include <stdlib.h>


int fun(int** p)
{
	*p = NULL;
	return 0;
}

int main(void)
{
	int a = 0;
	int* p1 = &a;
	printf("%p\n", p1);

	fun(&p1);
	printf("%p\n", p1);

	return 0;
}
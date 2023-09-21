#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b)
{
	printf("78");
	return 0;
}

int fun1(int a)
{
	printf("12");
	printf("45");
	return 0;
}

int main(void)
{
	int (*p)(int, int) = fun;
	p(1,2);
	return 0;
}
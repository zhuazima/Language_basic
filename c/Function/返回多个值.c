#include <stdio.h>
#include <stdlib.h>


int* fun()
{
	int* p = (int*)malloc(sizeof(int) * 2);
	*p = 4;
	p[1] = 5;

	return p;

}

int main(void)
{
	int* a;
	a = fun();

	printf("%d,%d", a[0], a[1]);

	return 0;
}
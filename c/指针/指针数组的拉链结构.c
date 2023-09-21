#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[4] = { 0,1,2,3 };
	int	b[2] = { 0,1 };
	int	c[3] = { 0,1,2 };
	int	d[4] = { 7,8,5,3 };

	int* lalian[4] = { a, b, c, d };

	printf("%d\n", lalian[2][2]);

	return 0;
}
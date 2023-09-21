#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a[5] = {1,2,3,4,5};
	int(*p)[5] = &a;

	printf("%d", (*p)[2]);
	return 0;
}
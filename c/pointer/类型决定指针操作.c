#include<stdio.h>
#include<stdlib.h>

int main()
{
	int  a = 123;
	int* p = &a;

	double d = 123.123;
	int* p1 = &d;

	printf("%lf,%lf\n", d, *p1);

	*p1 = 132465;
	printf("%lf,%lf\n", d, *p1);

	return 0;
}
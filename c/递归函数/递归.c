#include <stdio.h>
#include <stdlib.h>

int fun(void)
{
	printf("i am fun");

		

	fun();
	return 0;
}

int main(void)
{
	fun();


	return 0;
}
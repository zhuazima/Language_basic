#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fun(n - 1) + fun(n - 2);
	}
	
	
}

int main(void)
{
	printf("%d\n", fun(10) );

	

	return 0;
}
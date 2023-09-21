#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a[2][3] = { { 3, 4, 5 } ,
					{ 7, 8, 9} };


	int(*p)[3] = &a[1];
	int(*p1)[2][3] = &a;

	int i, j;

	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d", (*p1)[i][j]);
		}
	
	}

	return 0;
}
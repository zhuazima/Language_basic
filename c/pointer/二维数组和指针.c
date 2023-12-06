#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a[2][3] = { { 3, 4, 5 } ,
					{ 7, 8, 9} };


	int(*p)[3] = &a[1];
	int(*p1)[2][3] = &a;
	//printf("%d", p[0][2]);

	printf("%d", (*p1)[0][0]);

	return 0;
}
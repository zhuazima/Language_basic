#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a;
	char str[20] = {0};
	FILE* pFile = fopen("qwe.txt", "r");

	//while (a = fread(str, sizeof(char), 1, pFile))
	while( !feof(pFile) )
	{
		a = fread(str, sizeof(char), 1, pFile);
		printf(str);


	}


	fclose(pFile);

	return 0;
}
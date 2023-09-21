#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a;
	FILE* pFile = fopen("qwe.txt", "r");
	char* str = "Hello world~";
	a = fwrite(str,sizeof(char),strlen(str) + 1,pFile);
	a = errno;
	fclose(pFile);
	return 0;
}

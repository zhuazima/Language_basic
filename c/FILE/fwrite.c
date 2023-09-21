#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	int a;
	FILE* pFile = fopen("qwe.txt", "w");//r
	char* str = "Hello world~";
	//char* str1 = "This guy is so handsome~";

	//a = fwrite(str, sizeof(char), strlen(str) + 1, pFile);


	fwrite(str, sizeof(str), strlen(str) + 1, pFile);
	//fwrite(str, sizeof(str1), strlen(str1) + 1, pFile);

	//a = errno;




	fclose(pFile);




	return 0;
}

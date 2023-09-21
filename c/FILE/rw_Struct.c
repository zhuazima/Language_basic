#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node
{
	int num;
	char name[20];
	int age;
	int height;
};


int main(void)
{
	int a;
	struct node no = {2019,"wankunpeng",18,180};
	struct node no1;


	FILE* pFile = fopen("qwe.txt", "w");
	fwrite(&no, sizeof(no), 1, pFile);

	fclose(pFile);

	pFile = fopen("qwe.txt", "r");
	fread(&no1, sizeof(no), 1, pFile);

	fclose(pFile);





	return 0;
}
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//	int a;
//	char str[20] = {0};
//	FILE* pFile = fopen("qwe.txt", "r");
//
//	//利用读文件的函数的返回值作为循环判断条件，在读不出的时候其返回值是0
//	//或者用feof函数,到文件结尾返回1，所以加个！，注意使用的时候在文件结尾加个回车，不然会多读出来一个字符
//	//while (a = fread(str, sizeof(char), 1, pFile))
//	while( !feof(pFile) )
//	{
//		a = fread(str, sizeof(char), 1, pFile);
//		//每次读1个字节，这里就打印出来1个字节
//		printf(str);
//
//
//	}
//
//
//	fclose(pFile);
//
//	return 0;
//}
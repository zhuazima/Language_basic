//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main(void)
//{
//
//	int a;
//	//路径可用相对或者绝对路径
//	FILE* pFile = fopen("qwe.txt", "w");//r只读写，w是擦除写， a可读可写 在之前的基础上继续写
//	char* str = "Hello world~";
//	//char* str1 = "This guy is so handsome~";
//
//	//写的时候会有返回值，a 用来查看这个返回值。0就是失败，非0则是写入文件的字符的个数
//	//+1的意思是字符串的\0也写上
//	//a = fwrite(str, sizeof(char), strlen(str) + 1, pFile);
//
//
//	fwrite(str, sizeof(str), strlen(str) + 1, pFile);
//	//fwrite(str, sizeof(str1), strlen(str1) + 1, pFile);
//
//	//在写失败的语句下记录错误码，到工具中查看其定义
//	//a = errno;
//
//
//
//
//	fclose(pFile);
//
//
//
//
//	return 0;
//}

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
//	//���ö��ļ��ĺ����ķ���ֵ��Ϊѭ���ж��������ڶ�������ʱ���䷵��ֵ��0
//	//������feof����,���ļ���β����1�����ԼӸ�����ע��ʹ�õ�ʱ�����ļ���β�Ӹ��س�����Ȼ��������һ���ַ�
//	//while (a = fread(str, sizeof(char), 1, pFile))
//	while( !feof(pFile) )
//	{
//		a = fread(str, sizeof(char), 1, pFile);
//		//ÿ�ζ�1���ֽڣ�����ʹ�ӡ����1���ֽ�
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
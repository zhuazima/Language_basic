//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//
//	int a;
//	//·��������Ի��߾���·��
//	FILE* pFile = fopen("qwe.txt", "r");//rֻ��д��w�ǲ���д�� a�ɶ���д ��֮ǰ�Ļ����ϼ���д
//	char* str = "Hello world~";
//
//	//д��ʱ����з���ֵ��a �����鿴�������ֵ��0����ʧ�ܣ���0����д���ļ����ַ��ĸ���
//	//+1����˼���ַ�����\0Ҳд��
//	a = fwrite(str,sizeof(char),strlen(str) + 1,pFile);
//
//	//��дʧ�ܵ�����¼�¼�����룬�������в鿴�䶨��
//	a = errno;
//
//
//
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

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>


int fun(void)
{
	printf("hello");
	return 0;
}

int main(void)
{
	int i;
	int j;
	//(int(*) [5])��ǿ������ת������ʾ�Ǹ�ָ�룬���Ǹ�����ָ��
	//��ֵ�����������˼�ǣ�����һ������ָ����� p
	//һά����
	int(*p)[5] = (int(*)[5])malloc(sizeof(int) * 5);

	for( i = 0;i < 5;i ++ )
	{
		(*p)[i] = i;
		printf("%d\n", (*p)[i]);

	}
	free(p);

	//��ά����
	int(*p1)[2][3] = (int(*)[2][3])malloc(sizeof(int) * 2 * 3);

	for (i = 0;i < 2;i++)
	{
		for (j = 0;j < 3;j++)
		{
			(*p1)[i][j] = j + 1;
			printf("%d\n", (*p1)[i][j]);

		}

	}
	free(p1);

	//�������������Ϊ��һ�����������������������ʲô�أ������Լ��ĵ�ַ
	printf("%p,%p\n", fun, &fun);
	return 0;
}
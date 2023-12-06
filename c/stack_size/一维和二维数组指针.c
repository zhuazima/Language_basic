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
	//(int(*) [5])是强制类型转换，表示是个指针，还是个数组指针
	//赋值操作的左边意思是：定义一个数组指针变量 p
	//一维数组
	int(*p)[5] = (int(*)[5])malloc(sizeof(int) * 5);

	for( i = 0;i < 5;i ++ )
	{
		(*p)[i] = i;
		printf("%d\n", (*p)[i]);

	}
	free(p);

	//二维数组
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

	//函数名首先理解为是一个变量，这个变量里面存的是什么呢？是它自己的地址
	printf("%p,%p\n", fun, &fun);
	return 0;
}
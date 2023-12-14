#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a;
	int i = 0;
	int count[10] = { 0 };

	int number_count = 0;//打印循环变量



	//随机数种子
	//time(NULL)返回64位 的系统时间值
	srand( (unsigned int)time(NULL) );

	while (i < 10000)
	{
		//a = rand();

		//怎么得到一定范围的随机数？求余 例如得到 0 - 78的随机数
		//a = rand() % 79;

		//例如得到 10 - 78的随机数
		//a = rand() % 79 + 10;

		//随机产生指定数组中的一个值，用随机数函数产生下标

		//测试是不是真的堆积，可以计算每个数出现个概率

		a = rand() % 10;

		switch(a)
		{
		case 0:
			count[0]++;
			break;

		case 1:
			count[1]++;
			break;

		case 2:
			count[2]++;
			break;

		case 3:
			count[3]++;
			break;

		case 4:
			count[4]++;
			break;

		case 5:
			count[5]++;
			break;

		case 6:
			count[6]++;
			break;
		case 7:
			count[7]++;
			break;

		case 8:
			count[8]++;
			break;

		case 9:
			count[9]++;
			break;

		default:
			break;
		

		}


		i++;

	}


	while (number_count < 10)
	{
		printf("%d\n", count[number_count]);

		number_count++;

	}

	



	return 0;
}
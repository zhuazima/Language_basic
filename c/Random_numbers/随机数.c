#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a;
	int i = 0;
	int count[10] = { 0 };

	int number_count = 0;//��ӡѭ������



	//���������
	//time(NULL)����64λ ��ϵͳʱ��ֵ
	srand( (unsigned int)time(NULL) );

	while (i < 10000)
	{
		//a = rand();

		//��ô�õ�һ����Χ������������� ����õ� 0 - 78�������
		//a = rand() % 79;

		//����õ� 10 - 78�������
		//a = rand() % 79 + 10;

		//�������ָ�������е�һ��ֵ������������������±�

		//�����ǲ�����Ķѻ������Լ���ÿ�������ָ�����

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
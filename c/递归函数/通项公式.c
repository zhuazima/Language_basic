#include <stdio.h>
#include <stdlib.h>

//�ݹ�ʵ������ִ�е�ʱ���Ǻ����Ķ��Ƕ��
//ÿһ�㶼�������ڴ�ռ䣬���ǻ�û���ü����ظ�ϵͳ�����ֽ�������һ��
//���Ծ�������ɱ�ջ
//�����ʹ�õ�ʱ����ʹ��̫���
//
//��Ч�ʱ�ѭ���ͣ�ͨ������ʹ��ѭ����
//
//




//��ͨ�ʽ�Ķ�������ô��
int fun(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fun(n - 1) + fun(n - 2);
	}
	
	
}

int main(void)
{
	printf("%d\n", fun(10) );

	

	return 0;
}
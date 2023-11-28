#include <stdio.h>
#include <stdlib.h>

//递归的本质就是循环
//不能无限递归
//需要有控制参数，且有初始值，例如main函数中的 fun(5)
//要有判断条件，例如  n>0
//参数要能改变，不然就还是无限循环，例如 n-1

int fun(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		fun(n - 1);

	}

	return 0;
}


int main(void)
{

	fun(5);




	return 0;
}
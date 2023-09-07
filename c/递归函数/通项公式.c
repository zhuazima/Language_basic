#include <stdio.h>
#include <stdlib.h>

//递归实际上在执行的时候是函数的多层嵌套
//每一层都在申请内存空间，但是还没来得及返回给系统，就又进入了下一层
//所以就容易造成爆栈
//因此在使用的时候不能使用太多层
//
//其效率比循环低，通常都是使用循环啦
//
//




//有通项公式的都可以这么用
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
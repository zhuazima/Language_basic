#include <stdio.h>
#include <stdlib.h>

int num = 10;

const int* fun( const int a)
{
	//在函数形参中使用 const 
	//是保护形参不被修改
	a = 20;

	printf("%d\n", a);


	return &num;
}



int main(void)
{

	//对返回值指针进行地址操作是不行滴
	//可以保护返回值
	*fun(10) = 13;



	//保护字符串常量
	const char* p = "Hello world";
	*p = 'e';










	return 0;
}
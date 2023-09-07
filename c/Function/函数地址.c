#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b)
{
	printf("名花倾国两相欢，常得君王带笑看\n");



	return 0;
}


int fun1(int a)
{

	printf("名花倾国两相欢，常得君王带笑看\n");
	printf("名花倾国两相欢，常得君王带笑看\n");



	return 0;
}

int main(void)
{
	//*p要加上小括号，涉及到运算顺序，表示p 是个指针
	//这样才能接收函数的地址
	//函数名本质就是个地址
	int (*p)(int, int) = fun1;
	p(1,2);




	return 0;
}
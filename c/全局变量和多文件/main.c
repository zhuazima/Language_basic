#include "Common.h"

//静态可以理解为，人被铁链子锁在了屋子里
//这里是全局变量的定义
//静态全局变量，只能在本文件中使用
//static int a = 12;
int a = 12;
int b = 24;

//静态函数也有相同的含义,测试，在a.c文件中使用
//static void fun2(void)
void fun2(void)
{
	printf("wodfosdh");

}



//静态局部变量测试
//输出是a: 2 2 2    b: 2 3 4
//因为静态变量的生命周期是整个程序的生命周期，它是在main函数执行之前就被定义的
void fun5(void)
{
	int a = 1;
	static int b = 1;

	a++;
	b++;

	printf("%d,%d\n", a, b);

}





int main(void)
{

	fun();
	fun1();


	//�ֲ���̬��������
	fun5();
	fun5();
	fun5();




	return 0;
}
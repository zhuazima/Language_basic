//#include <stdio.h>
//#include <stdlib.h>
//
//
////修改外部变量或指针，都是利用传递进来的地址，用地址操作符操作
////否则，直接对形参操作是不能改变外部的值的
//int fun(int** p)
//{
//	*p = NULL;
//	return 0;
//}
//
//
//
//int main(void)
//{
//	int a = 0;
//	int* p1 = &a;
//	printf("%p\n", p1);
//
//	fun(&p1);
//	printf("%p\n", p1);
//
//	return 0;
//}
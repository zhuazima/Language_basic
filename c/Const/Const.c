//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int a = 12;
//	int b = 24;
//
//	//const int 和int const是一样的
//	//const修饰指针的时候，*p是不能被修改的，如*p = 23;是会报错的
//	//但是指针 p 是可以修改的
//	//同时变量 a 也是可以修改的
//	//可以理解为空间内容，修改途径之一 *p 被禁止
//
//	//const int* p = &a;
//	//printf("%d\n", *p);
//	////*p = 23;
//	//a = 100;
//	//printf("%d\n", *p);
//
//
//	//p = &b;
//	//printf("%d\n", *p);
//
//
//	//int* const是把指针给锁定了，不能再给p 赋予新的值
//	//记忆：const放在谁前面谁不能变
//	//int* const p = &a;
//
//
//
//	//这种是*p不能变 p也不能变
//	//或者也可以写成 int const* const p
//	const int* const p = &a;
//	//*p = 12;
//	//p = &b;
//
//
//
//
//
//
//
//	return 0;
//}
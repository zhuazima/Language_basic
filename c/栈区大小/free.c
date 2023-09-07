//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#include<memory.h>
//
//
//int main(void)
//{
//	//free相当于把地址里面的数据初始化
//	//释放空间之后，之前的指针就不能再用了，它已经是个野指针了
//	//所以，释放之后给指针赋值为空NULL
//	int* p = (int*)malloc(4);
//	*p = 12;
//
//	printf("%p,%d\n", p, *p);
//
//	free(p);
//	p = NULL;
//
//	//指针赋值为NULL之后系统不允许对其操作了
//	printf("%p,%d\n", p, *p);
//
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#include<memory.h>
//
//
//int main(void)
//{
//	//申请堆区空间用malloc函数
//	//int的含义是申请的空间上用来放int 类型空间的
//	//或者说操作系统在访问空间的时候按照int类型的规则，即一次访问4个字节
//
//		//int* p = (int*)malloc(8);
//
//		//这个出来的结果只是4，不管上面申请的是多大的空间
//	//printf("%d", sizeof(*p));
//
//
//
//
//	//问题：如果malloc申请空间的时候如果系统空间不够怎么办？
//	//32位编译器环境下，最多定义4G内存，操作系统本身占用2G，剩下就是2G
//	//u的意思是unsigned
//	//%p是输出地址的
//
//	//返回0地址，这个地址是不能进行操作的
//	int  i;
//
//
//	//赋值操作，可以用循环，或者用memst函数，这个函数是按字节赋值的
//	int* p = (int*)malloc(40);
//
//	//for (i = 0; i < 10;i++)
//	//{
//	//	p[i] = 0;
//
//	//}
//
//	memset(p, 0, 40);
//	for (i = 0; i < 10;i++)
//	{
//
//		printf("%d\n", p[i]);
//
//	}
//
//
//
//
//	return 0;
//}

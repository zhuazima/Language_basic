/*
 * @Author: zhuazima 1025854946@qq.com
 * @Date: 2024-01-24 10:19:14
 * @LastEditors: zhuazima 1025854946@qq.com
 * @LastEditTime: 2024-02-04 22:00:08
 * @FilePath: \Language_basic-main\c\Const\Const.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	int a = 12;
	int b = 24;

	const int* p = &a;
	printf("%d\n", *p);
	//*p = 23;
	a = 100;
	printf("%d\n", *p);

	p = &b;
	printf("%d\n", *p);

	int* const p = &a;

	// int const* const p  
	const int* const p = &a;
	// *p = 12;
	// p = &b;


	return 0;
}
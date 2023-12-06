#include<stdio.h>
#include<stdlib.h>

void test(const double arr[],int n);

int main()
{
    //测试数组指针
    int (*ptr)[2];       //这是个指向有两个int类型数据的 数组
    int torf[3][2] = {  
                        {12},
                        {14,16} ,
                        {5,11}
                    };
    ptr = torf;

    printf("**ptr is : %d ,**(ptr + 1 ) is :%d .",**ptr,**(ptr+1));

	//测试C99 编译器支持与否。C99标准可以用下标给数组的一个元素赋值。
    //指定元素下标之后，后面的数据按照顺序赋值
    int Arr[100] = { 1,2,3,[6] = 20, 6,7,8,[99] = -1 };
    printf("number 99 data is %d ,%d ,%d ,%d,%d,%d,%d,%d. ",Arr[0],Arr[1],Arr[2], Arr[6], Arr[7], Arr[8], Arr[9], Arr[99]);

    //测试匿名数组
    test((int[4]){8,3,9,2},4);




}

void test(const double arr[],int n)
{ 

}




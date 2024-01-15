#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main( void )
{
    /*float 数据的显示*/
    printf("%d\n",sizeof(float));   //float 类型占用 4 个字节,32 位的存储空间
    printf("%f\n",1.23e5);    //科学计数法，表示一个很大的数
    float planck = 6.63e-34;    //表示一个很小的数
    printf("%f\n",planck);   
    float toobig = 3.4E38 * 100.0f;     //浮点数的上溢
    printf("%e\n", toobig); 
    printf("%f\n",0xa.1fp10);    //用16进制表示， 指数部分表示 2 的次幂
    printf("%f\n",asin(0.5));    //传入参数正弦值，得到对应的角度（用弧度表示）,传入参数超过 1 ，会得到无效结果


    /*double 数据的显示*/
    printf("%d\n",sizeof(double));   //double 类型占用 8 个字节, 64 位的存储空间
    printf("%f\n",1.23456789123465e5);    //科学计数法，表示一个很大的数

    printf("%d\n",sizeof(1.23456789123465e5));    //系统默认字面数字是双精度
    printf("%d\n",sizeof(1.2345e5));

    /*对比 float 和 double的精度 */
    float test_a_number = 0.123456789e7;
    double test_b_number = 0.1234567891234656789e5;
    printf("%f , %f\n",test_a_number,test_b_number);



    
	return 0;
}
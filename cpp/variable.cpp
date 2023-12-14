/*
 * @Author: your name
 * @Date: 2021-09-26 19:53:51
 * @LastEditTime: 2021-10-13 11:16:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \?? - ??\Hello.cpp
 */
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;//use namespace

int main()
{

	//变量的长度
	cout << "char length is : " << sizeof(char) << "bytes\n";
	cout << "short length is : " << sizeof(short) << "bytes\n";
	cout << "int length is : " << sizeof(int) << "bytes\n";
	cout << "long length is : " << sizeof(long) << "bytes\n";
	cout << "longlong length is : " << sizeof(LONGLONG) << "bytes\n";
	cout << "int length is : " << sizeof(int) << "bytes\n";


	const int const_variable  = 2;
	cout << "This const variable is : " << const_variable << endl;
	// const_variable = const_variable + 1;
	// cout << "This const variable is : " << const_variable << endl;
	cout << endl;



	return 0;
}
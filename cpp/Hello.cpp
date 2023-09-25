/*
 * @Author: your name
 * @Date: 2021-09-26 19:53:51
 * @LastEditTime: 2021-10-12 10:52:36
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
	// while (1)
	{
		cout << "Hello world " << endl;
		Sleep(100);
		cout << "\n";
		int carrots;
		carrots = 25;
		cout << "I have ";
		cout << carrots;
		cout << " carrots";
		cout << endl;

		carrots  = carrots - 1;
		cout << "Crunch crunch , now i have "<< carrots << " carrots";

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;


		double square ;
		cout << "Input your square , of your house";
		cin  >> square;

		double length;
		length = sqrt(square);
		
		cout << "your length is "<< length << "meter";

	}


	return 0;
}
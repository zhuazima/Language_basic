#include <iostream>
using namespace std;

template <typename T , typename TT>
void fun(T t, TT a)
{
	cout << "i am fun ~" << endl;
}

template <typename T>
void fun1(T a)
{
	cout << "i am fun1 ~" << endl;
}

template<> void fun1<int>(int a)
{
	cout << a << endl;
}

void fun1(int a)
{
	cout << "aaaa ~ " << endl;
}

int main()
{
	fun(1,2);
	fun1(1);
	return 0;
}
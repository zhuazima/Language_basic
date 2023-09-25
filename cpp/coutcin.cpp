#include <iostream>
using  namespace std;

int main()
{
	cout << "hello" << 12 << 'a' << 12.3456  <<endl;
	char ch = 'A';
	int a = 12;
	float b = 45.4465f;
	cout << a << ' ' << b << ' ' << ch << ' ';

	cin >> ch >> a >> b;
	cout << ch << ' ' << a << ' ' << b << endl;

	return 0;
}
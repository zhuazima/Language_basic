// 参考链接 ：https://www.cnblogs.com/RioTian/p/14038681.html

#include <iostream>
#include <iomanip>    //必须要加上这个头文件
using  namespace std;

int main()
{
    // cout
    int n = 141;
    // 1) 分别以十六进制、十进制、八进制先后输出 n
    cout << "1)" << hex << n << " " << dec << n << " " << oct << n << endl;
    double x = 1234567.89, y = 12.34567;
    // 2)保留5位有效数字
    cout << "2)" << setprecision(5) << x << " " << y << " " << endl;
    // 3)保留小数点后面5位
    cout << "3)" << fixed << setprecision(5) << x << " " << y << endl;
    // 4)科学计数法输出，且保留小数点后面5位
    cout << "4)" << scientific << setprecision(5) << x << " " << y << endl;
    // 5)非负数显示正号，输出宽度为12字符，宽度不足则用 * 填补
    cout << "5)" << showpos << fixed << setw(12) << setfill('*') << 12.1
         << endl;
    // 6)非负数不显示正号，输出宽度为12字符，宽度不足则右边用填充字符填充
    cout << "6)" << noshowpos << setw(12) << left << 12.1 << endl;
    // 7)输出宽度为 12 字符，宽度不足则左边用填充字符填充
    cout << "7)" << setw(12) << right << 12.1 << endl;
    // 8)宽度不足时，负号和数值分列左右，中间用填充字符填充
    cout << "8)" << setw(12) << internal << -12.1 << endl;
    cout << "9)" << 12.1 << endl;

    // cin
	char ch;
	int a ,b;
	cout << "input char / int /int :";   
	cin >> ch >> a >> b;
	cout << dec << ch << ' ' << a << ' ' << b << endl;   //受到上面 oct 的格式控制,这里需要设置为十进制输出
	return 0;
}
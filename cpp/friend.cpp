//#include <iostream>
//using namespace std;
//
//class cStu
//{
//	int age = 12;
//	void fun()
//	{
//		cout << age << endl;
//	}
//	friend void fun1();//��Ԫ������Ϊ�����ѹ���,���������ĳ�Ա��fun1������˵���� public����
//	
//	friend class cTeach;//���࣬������������ã�������һ��public�ĺ��������ֵ���أ��Ӷ����ⲿ��ͨ������ǽӿں���
//};
//
//class cTeach
//{
//public:
//	int height = 180;
//	cStu st;
//	void fun2()
//	{
//		//һ���������һ���࣬Ҫ���Լ��ĺ����������
//		st.fun();
//	}	
//};
//
//void fun1()
//{
//	cStu St;
//	St.fun();
//
//	St.age = 13;
//	St.fun();
//}
//
//int main()
//{
//	fun1();
//
//	cTeach teach;
//	teach.fun2();
//
//
//
//	return 0;
//}
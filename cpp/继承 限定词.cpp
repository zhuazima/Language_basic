//#include <iostream>
//using namespace std;
//
//class cPeople
//{
//public:
//	void fun()
//	{
//		cout << "i am fun~" << endl;
//	}
//protected:
//	void fun1()
//	{
//		cout << "i am fun1~" << endl;
//	}
//private:
//	void fun2()
//	{
//		cout << "i am fun2~" << endl;
//	}
//};
//
////public�ļ̳У���public���޶���ʽ�Ѹ����public�̳й���
////class cXiaoming : public cPeople
////{
////public :
////	void fun3()
////	{
////		cout << "i am fun3~" << endl;
////		fun();
////	}
////};
//
//
////protected�ļ̳У���protected���޶���ʽ�Ѹ����public����protected�̳й���
////class cXiaoming : protected cPeople
////{
////public:
////	void fun3()
////	{
////		cout << "i am fun3~" << endl;
////		//�������������ڿ����ã������������������ǲ��ܷ��ʵġ�
////		fun();
////		fun1();
////	}
////};
//
//
////private�ļ̳�,��private���޶���ʽ�Ѹ����public����protected�̳й���
//class cXiaoming : private cPeople
//{
//public:
//	void fun3()
//	{
//		cout << "i am fun3~" << endl;
//		fun();
//		fun1();
//	}
//};
//
////����ȥprotected��private�ƺ���һ���ģ���ʵ���ǵĲ�������������������
//
//
//int main()
//{
//	cXiaoming Xm;
//	//Xm.fun();
//	Xm.fun3();
//
//
//
//
//	return 0;
//}
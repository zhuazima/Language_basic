//#include <iostream>
//using namespace std;
//
//template <typename T,typename Y = int >
//class cFather
//{
//public:
//	T a;
//	cFather( T t)
//	{
//		a = t;
//	}
//};
//
////class cSon : public cFather<int ,char>	//�������ָ��ģ���������
////�����ø����ķ�ʽ
//template <typename X,typename Z>
//class cSon : public cFather <X,Z>		//��ʱ�������������ʱ��Ҫ����ģ�����
//{
//public:
//	cSon() : cFather<X,Z>(12)
//	{
//		
//	}
//};
//
//
//
//int main()
//{
//	cSon<int, char> cSo ;
//	cout << cSo.a << endl;
//
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//class cFather
//{
//public:
//	virtual void fun()
//	{
//		cout << "i am father ~" << endl;
//	}
//
//};
//
//class cSon : public cFather
//{
//public:
//	void fun()
//	{
//		cout << "i am son ~" << endl;
//	}
//
//};
//
//
//int main()
//{
//	cFather* p = new cSon;
//	p->fun();
//
//	//���̫���˰�
//	//���͵�ǿ��ת���Ǳ���ģ���Ȼ�޷�����
//	typedef void (*pF)();//pF ��void�ͺ���ָ��ı���
//	((pF)(*(int*)(*(int*)p)))();
//
//
//
//
//	return 0;
//}
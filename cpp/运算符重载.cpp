//#include <iostream>
//using namespace std;
//
//class cStu
//{
//public:
//	int age;
//	float height;
//	cStu()
//	{
//		age = 18;
//		height = 180.1f;
//	}
//	//���ڶ���
//	//void operator +(int i)//�����ⶨ��ֻ�ǲ�������ʽ��ͬ
//	//{
//	//	cout << age + i << endl;
//	//}
//};
//
////û�з���ֵʱ�����ܽ����ظ������
////���ⶨ��
////void operator + (cStu& St, int i)
////{
////	cout << (St.age + i) << endl;
////}
//
////�з���ֵ�ĵ����������
////int operator +(cStu& St, int i)
////{
////	return St.age + i;
////}
//
////���ض�������ã�����ֱ�ӷ��ض��󣬷������ù��캯����ʹ���ݷ����ı�
//cStu operator +(cStu & St, int i)
//{
//	St.age += i;
//	return St;		//��������ñ��ʻ��Ƕ������Բ���д�� return &St;
//}
//
//
//int main()
//{
//	cStu St;
//	//cout << St + 1 + 10;	//����ǵ�����
//
//	//����������غ������ββ������õ�ʱ������Ҳ�ǳ����ģ�Ϊʲô�أ�
//	//ԭ����St + 1�������ֵ�Ǳ�����ģ������Ǳ����ڲ����棬�����������Ҳ��֪��
//	//�����������Ǳ����˵ģ���˿��Դ�ӡ�����ͬ����Ҳ������ .age ����ʽ
//	//�����β���û���д�� ����
//	cout << (St + 1).age << endl;		//���������ôд(St + 1).age
//
//	cout << St.age << endl;
//
//
//	return 0;
//}
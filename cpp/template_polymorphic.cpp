#include <iostream>
using namespace std;

template <typename X,typename Y>
class cFather
{
public:
	virtual void fun()
	{
		cout << "i am father ~" << endl;
	}


};

template <typename A,typename B>
class cSon : public cFather<A,B>
{
public:
	void fun()
	{
		cout << "i am son ~" << endl;
	}
};


int main()
{
	cFather<int ,char>* pFa = new cSon<int ,char>;
	pFa->fun();


	return 0;
}
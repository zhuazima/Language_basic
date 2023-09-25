#include <iostream>
using namespace std;

class cGrandfather
{
public:
	cGrandfather(int a ,int b) 
	{
		
	}
};

class cFather : public cGrandfather
{
public:
	cFather(int a) : cGrandfather( a,12 )	
	{
		
	}
};

class cSon : public cFather
{
public:
	cSon( int a ) : cFather( a )
	{
		
	}
};


int main()
{
	cSon cSo();
	return 0;
}
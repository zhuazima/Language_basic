/***********************************************************************************************************************************


***********************************************************************************************************************************/


#include <iostream>
using namespace std;

class cGrandfather
{
public:
	cGrandfather()
	{
		cout << "i am Grandfather~" << endl;
	}
	~cGrandfather()
	{
		cout << "i am Grandfather !" << endl;
	}

};

class cFather : public cGrandfather
{
public:
	cFather()
	{
		cout << "i am cFather~" << endl;
	}
	~cFather()
	{
		cout << "i am cFather !" << endl;
	}

};

class cSon : cFather
{
public:
	cSon()
	{
		cout << "i am cSon~" << endl;
	}
	~cSon()
	{
		cout << "i am cSon !" << endl;
	}

};


int main()
{
	{
		cSon cSo;
	}
	
	

	return 0;
}
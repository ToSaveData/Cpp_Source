#include "ConTest.h"

CON1::CON1(const int c):c(200)
{
	this->c = c;
	cout << "***CON1의 생성자***" << endl;
	cout << "c=" <<c<< endl;
}
CON1::~CON1()
{
	cout << "***CON1의 소멸자***" << endl;
}
CON2::CON2():CON1(300)
{
	cout << "***CON2의 생성자***" << endl;
	cout << "c=" << c << endl;
}
CON2::~CON2()
{
	cout << "***CON2의 소멸자***" << endl;
}
#include <stdlib.h>

int main()
{
	CON2* p_TEST = new CON2;
	delete p_TEST;
//	//CON2* p_TEST = new CON2;
//	//delete p_TEST;
//#if 1
//	//CON2* p_obj = new CON2; //p_ => 헝가리안 표기법
//	
//	CON2* p_obj = (CON2*)malloc(sizeof(CON2));
//	//free(p_obj);
//	delete p_obj;
//#else
//	CON2 obj;
//#endif
	return 0;
}
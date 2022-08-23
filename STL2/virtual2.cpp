//#include <iostream>
//using namespace std;
//
//class First
//{
//public:
//#if 0
//	virtual void print() = 0;
//#else
//	virtual void print()
//	{
//		cout << "First" << endl;
//	}
//#endif
//};
//
//class Second : public First
//{
//public:
//	void print() override
//	{
//		cout << "Second" << endl;
//	}
//};
//
//class Third : public Second
//{
//public:
//	void print()
//	{
//		cout << "Third" << endl;
//	}
//};
//
//int main()
//{
//#if 1
//	Third third = Third();
//	Second second = third;
//	First first = third;
//
//	third.print();
//	second.print();
//	first.print();
//#else
//	Third* third = new Third();
//	Second* second = thrid;
//	First* first = thrid;   //First*first = new First();
//	ccc->print();
//	third->print();
//	first->print();
//#endif
//
//	return 0;
//}

#include <iostream>
using namespace std;

class A
{
public:
	virtual string ClassMessage()
	{
		return "class A";
	}
};

class B : public A
{
public:
	string ClassMessage()
	{
		return "class B";
	}
};

void TestFunction1(A &x) //레퍼런스 변수도 런타임 시에 결정이 되기 때문에 동적으로 결정이 됨
{
	cout << x.ClassMessage().data() << endl;
}

int main()
{
	A a;
	B b;
	TestFunction1(a);
	TestFunction1(b);

	return 0;
}
//#include <iostream>
//using namespace std;
//
//class BaseOne
//{
//public:
//	void SimpleFuncOne()
//	{
//		cout << "BaseOne" << endl;
//	}
//};
//
//class BaseTwo
//{
//public:
//	void SimpleFuncTwo()
//	{
//		cout << "BaseTwo" << endl;
//	}
//};
//
//class MultiDerived: public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		SimpleFuncOne();
//		SimpleFuncTwo();
//
//	}
//};
//
//int main()
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}

#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person::Person() 생성자 호출" << endl;
	}

	~Person()
	{
		cout << "Person::Person() 소멸자 호출" << endl;
	}
	
	virtual void write() = 0;
	
	void sleep()
	{
		cout << "잔다" << endl;
	}
};

class Chulsoo: public virtual Person
{
public:
	Chulsoo(): Person()
	{
		cout << "Chulsoo::Chulsoo() 생성자 호출" << endl;
	}

	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() 소멸자 호출" << endl;
	}
	virtual void write() 
	{
		cout << "책을 잘 쓴다" << endl;
	}
	
};

class Younghee: public virtual Person
{
public:
	Younghee() : Person()
	{
		cout << "Younghee::Younghee() 생성자 호출" << endl;
	}

	~Younghee()
	{
		cout << "Younghee::~Younghee() 소멸자 호출" << endl;
	}
	virtual void write()
	{
		cout << "책을 못 쓴다" << endl;
	}
};

class Youngchul: public Younghee, public Chulsoo 
{
public:
	Youngchul() : Younghee(), Chulsoo()
	{
		cout << "Youngchul::Youngchul() 생성자 호출" << endl;
	}

	~Youngchul()
	{
		cout << "Youngchul::~Youngchul() 소멸자 호출" << endl;
	}
	void write()
	{
		//write();
		Chulsoo::write();
	}
};

int main()
{
	Youngchul youngchul;
	youngchul.write(); // 코드의 입장에서는 영희와 철수의 부모클래스가 동일한지 모름 => Person의 생성자 2번 호출
	youngchul.sleep();
	return 0;
}
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
		cout << "Person::Person() ������ ȣ��" << endl;
	}

	~Person()
	{
		cout << "Person::Person() �Ҹ��� ȣ��" << endl;
	}
	
	virtual void write() = 0;
	
	void sleep()
	{
		cout << "�ܴ�" << endl;
	}
};

class Chulsoo: public virtual Person
{
public:
	Chulsoo(): Person()
	{
		cout << "Chulsoo::Chulsoo() ������ ȣ��" << endl;
	}

	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� ȣ��" << endl;
	}
	virtual void write() 
	{
		cout << "å�� �� ����" << endl;
	}
	
};

class Younghee: public virtual Person
{
public:
	Younghee() : Person()
	{
		cout << "Younghee::Younghee() ������ ȣ��" << endl;
	}

	~Younghee()
	{
		cout << "Younghee::~Younghee() �Ҹ��� ȣ��" << endl;
	}
	virtual void write()
	{
		cout << "å�� �� ����" << endl;
	}
};

class Youngchul: public Younghee, public Chulsoo 
{
public:
	Youngchul() : Younghee(), Chulsoo()
	{
		cout << "Youngchul::Youngchul() ������ ȣ��" << endl;
	}

	~Youngchul()
	{
		cout << "Youngchul::~Youngchul() �Ҹ��� ȣ��" << endl;
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
	youngchul.write(); // �ڵ��� ���忡���� ����� ö���� �θ�Ŭ������ �������� �� => Person�� ������ 2�� ȣ��
	youngchul.sleep();
	return 0;
}
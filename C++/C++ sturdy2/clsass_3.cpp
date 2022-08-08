#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // const char *myname�� ����ؾ� ��.
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname); // strcpy(name, myname); ����
		age=myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main()
{
//	Person a = Person("foreman", 20);
	Person a("foreman", 20); //a��� ��ü�� ���� Ŭ������ �θ�
	a.ShowPersonInfo();

	return 0;
}
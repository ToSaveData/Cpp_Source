#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) // const char *myname를 사용해야 함.
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname); // strcpy(name, myname); 가능
		age=myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
	Person a("foreman", 20); //a라는 객체를 만들어서 클래스를 부름
	a.ShowPersonInfo();

	return 0;
}
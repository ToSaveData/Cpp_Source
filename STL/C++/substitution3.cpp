#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	char *m_name;
	int m_age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1; //NULL포함
		m_name = new char[len]; 
		strcpy_s(m_name, len, myname);
		m_age = myage;
	}

	~Person()
	{
		delete[] m_name;
		cout << "called destructor!" << endl;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << m_name << endl;
		cout << "나이: " << m_age << endl;
	}

	Person& operator=(const Person& ref) 
	{
		if (m_name != nullptr)
			delete[] m_name;

		int len = strlen(ref.m_name) + 1;
		m_name = new char[len];
		strcpy_s(m_name, len, ref.m_name);
		m_age = ref.m_age;

		return *this;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	
	man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
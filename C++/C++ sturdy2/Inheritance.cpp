#include <iostream>
using namespace std;

class Person
{
private:
	int age; //나이
	char name[50]; //이름
	
public:
	Person(int myage, const char* myname ): age(myage) // const char *myname를 사용해야 함.
	{
		strcpy(name, myname); //strcpy_s(name, len, myname); 
	}
	
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm " <<age<<" years old"<< endl;
	}

};

class UnivStudent :public Person
{
private:
	char major[50]; //전공과목
public:
	UnivStudent(int myage, const char* myname, const char* mymajor) : Person(myage, myname)
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};
int main()
{
	UnivStudent a(27, "foreman", "business");
	a.WhoAreYou();
	return 0;
}
#include <iostream>
using namespace std;
#define NAME_LEN 20

class Person
{
protected:
	char name[NAME_LEN];
	int age;
public:
	Person(const char* name, int age)
	{
		strcpy_s(this->name, NAME_LEN, name);
		this->age = age;
		cout << "Person::Person(name, age) ������ �Ϸ�" << endl;
	}

	~Person()
	{
		cout << "Person::~Person() �Ҹ��� �Ϸ�" << endl;
	}
	
	void introduce()
	{
		cout << "Person�� �̸�: " << name << endl;
		cout << "Person�� ����: " << age << endl;
	}

	void eat()
	{
		cout << "Person�� �Դ´�" << endl;
	}

	void sleep()
	{
		cout << "Person�� �ܴ�" << endl;
	}
};

class Chulsoo : public Person
{
private:
	int numOfBooks;
public:
	Chulsoo(const char* name, int age, int numOfBooks) : Person(name, age)
	{
		this->numOfBooks = numOfBooks;
		cout << "Chulsoo::Chulsoo(const char* name, int age, int numOfBooks) ������ �Ϸ�" << endl;
	}
	
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() �Ҹ��� �Ϸ�" << endl;
	}

	void write()
	{
		cout << "ö���� å�� ����" << endl;
	}

	void introduce() const
	{
		cout << "ö���� �̸�: " << name << endl;
		cout << "ö���� ����: " << age << endl;
	}
	
	void setAge(int age)
	{
		this->age = age;
	}
};

int main(void)
{
	Person person("���", 100);
	person.introduce();

	Chulsoo chulsoo("ö��", 32, 3);
	chulsoo.introduce();

	//cout << "===============(Chulsoo -> Person) ��ĳ����(����)===============" << endl;
	//Chulsoo chulsooUpRef = Chulsoo("ö��", 32, 3);
	//Person & personUpRef = chulsooUpRef;
	//personUpRef.introduce();
	//
	//cout << "===============(Chulsoo -> Person) ��ĳ����(������)===============" << endl;
	//Person* personUpPtr = new Chulsoo("ö��", 32, 3);
	//personUpPtr->introduce();
	//
	//cout << "===============(Chulsoo -> Person) ��ĳ����===============" << endl;
	//Chulsoo chulsooUp = Chulsoo("ö��", 32, 3);
	//Person personUp = chulsooUp;
	//personUp.introduce();
	//
	//cout << "===============(Chulsoo -> Person) �ٿ�ĳ����===============" << endl;
	////Person personDown = Person("���", 100);
	////Chulsoo chulsooDown = personDown;
	////chulsooDown.introduce();
	//
	//Person* pPersonDown = new Chulsoo("���", 100, 3);
	//Chulsoo* pChulsooDown = static_cast<Chulsoo*>(pPersonDown);
	//pChulsooDown->write();


	return 0;
}

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
		cout << "Person::Person(name, age) 생성자 완료" << endl;
	}

	~Person()
	{
		cout << "Person::~Person() 소멸자 완료" << endl;
	}
	
	void introduce()
	{
		cout << "Person의 이름: " << name << endl;
		cout << "Person의 나이: " << age << endl;
	}

	void eat()
	{
		cout << "Person은 먹는다" << endl;
	}

	void sleep()
	{
		cout << "Person은 잔다" << endl;
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
		cout << "Chulsoo::Chulsoo(const char* name, int age, int numOfBooks) 생성자 완료" << endl;
	}
	
	~Chulsoo()
	{
		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
	}

	void write()
	{
		cout << "철수는 책을 쓴다" << endl;
	}

	void introduce() const
	{
		cout << "철수의 이름: " << name << endl;
		cout << "철수의 나이: " << age << endl;
	}
	
	void setAge(int age)
	{
		this->age = age;
	}
};

int main(void)
{
	Person person("사람", 100);
	person.introduce();

	Chulsoo chulsoo("철수", 32, 3);
	chulsoo.introduce();

	//cout << "===============(Chulsoo -> Person) 업캐스팅(참조)===============" << endl;
	//Chulsoo chulsooUpRef = Chulsoo("철수", 32, 3);
	//Person & personUpRef = chulsooUpRef;
	//personUpRef.introduce();
	//
	//cout << "===============(Chulsoo -> Person) 업캐스팅(포인터)===============" << endl;
	//Person* personUpPtr = new Chulsoo("철수", 32, 3);
	//personUpPtr->introduce();
	//
	//cout << "===============(Chulsoo -> Person) 업캐스팅===============" << endl;
	//Chulsoo chulsooUp = Chulsoo("철수", 32, 3);
	//Person personUp = chulsooUp;
	//personUp.introduce();
	//
	//cout << "===============(Chulsoo -> Person) 다운캐스팅===============" << endl;
	////Person personDown = Person("사람", 100);
	////Chulsoo chulsooDown = personDown;
	////chulsooDown.introduce();
	//
	//Person* pPersonDown = new Chulsoo("사람", 100, 3);
	//Chulsoo* pChulsooDown = static_cast<Chulsoo*>(pPersonDown);
	//pChulsooDown->write();


	return 0;
}

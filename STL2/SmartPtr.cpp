//#include <iostream>
//#include <memory>
//using namespace std;
//
//class Chulsoo
//{
//private:
//	int age;
//public:
//	Chulsoo(int age) : age(age)
//	{
//		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
//	}
//
//	Chulsoo()
//	{
//		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
//	}
//
//	~Chulsoo()
//	{
//		cout << "Chulsoo::~Chulsoo() 소멸자 완료" << endl;
//	}
//	
//	void introduce();
//};
//
//int main(void)
//{
//	//Chulsoo* chulsooPtr2 = new Chulsoo(32);
//	//chulsooPtr2->introduce();
//	//delete chulsooPtr2;
//
//	//auto_ptr<Chulsoo> chulsooSmptr(new Chulsoo(32));
//	//chulsooSmptr->introduce();
//	
//	//unique_ptr<Chulsoo> chulsooSmptr1(new Chulsoo(32));
//	//chulsooSmptr1->introduce();
//	//cout << "unique_ptr<Chulsoo> 타입간 복사 생성자 호출 후" << endl;
//	////unique_ptr<Chulsoo> chulsooSmptr2 = chulsooSmptr1;
//	//unique_ptr<Chulsoo> chulsooSmptr2 = move(chulsooSmptr1);
//	//chulsooSmptr2->introduce();
//	//chulsooSmptr1->introduce();
//	
//	
//	//shared_ptr<Chulsoo> chulsooSmptr1(new Chulsoo(32));
//	//cout << chulsooSmptr1.use_count() << endl;
//	//chulsooSmptr1->introduce();
//	//cout << "shared_ptr<Chulsoo> 타입간 복사 생성자 호출 후" << endl;
//	//shared_ptr<Chulsoo> chulsooSmptr2 = chulsooSmptr1;
//	//cout << chulsooSmptr1.use_count() << endl;
//	//chulsooSmptr1->introduce();
//	//chulsooSmptr2->introduce();
//
//	return 0;
//}
//
//void Chulsoo::introduce()
//{
//	cout << "철수 나이: " << age << endl;
//}


#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char** argv)
{
	//unique_ptr<int> ptr01(new int(5));
	//auto ptr02 = move(ptr01);

	////대입 연산자를 이용한 복사는 오류를 발생시킴
	////unique_ptr<int> ptr03 = ptr01;

	//ptr02.reset();
	//ptr01.reset();

	//shared_ptr<int> ptr01(new int(5));
	//cout << ptr01.use_count() << endl;
	//auto ptr02(ptr01);
	//cout << ptr01.use_count() << endl;
	//auto ptr03 = ptr01;
	//cout << ptr01.use_count() << endl;

	shared_ptr<int> sp1(new int(5));
	weak_ptr<int> wp1 = sp1;
	cout << sp1.use_count() << endl;
	cout << wp1.use_count() << endl;
	{
		shared_ptr<int> sp2 = wp1.lock();
		cout << sp1.use_count() << endl;
		cout << wp1.use_count() << endl;
		if (sp2) {}
	}

	sp1.reset();

	shared_ptr<int> sp3 = wp1.lock();
	cout << sp1.use_count() << endl;
	cout << wp1.use_count() << endl;

	return 0;
}
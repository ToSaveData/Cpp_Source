//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	cout << "정수 개수: ";
//	cin >> size;
//	
//	int* arr = new int[size];
//
//	cout << "정수를 입력하시오." << endl;
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += arr[i];
//	float ave = (float)sum / (float)size;
//	cout << "합=" << sum << ",평균=" << ave << endl;
//	
//	delete[] arr;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Chulsoo
{
private:
	int age;
public:
	Chulsoo(int age) : age(age)
	{
		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 생성자 완료" << endl;
	}

	void introduce();

	~Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() 소멸자 완료" << endl;
	}

	void setAge(int age)
	{
		this->age = age;
	}
};

int main(void)
{
	Chulsoo* chulsooPtr1 = new Chulsoo(32);
//	Chulsoo* chulsooPtr1 = (Chulsoo*)malloc(sizeof(Chulsoo));
//	chulsooPtr1->setAge(32);
	chulsooPtr1->introduce();
	delete chulsooPtr1;
//	free(chulsooPtr1);
	return 0;
}

void Chulsoo::introduce()
{
	cout << "철수 나이: " << age << endl;
}

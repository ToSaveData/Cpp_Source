//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	cout << "���� ����: ";
//	cin >> size;
//	
//	int* arr = new int[size];
//
//	cout << "������ �Է��Ͻÿ�." << endl;
//	for (int i = 0; i < size; i++)
//		cin >> arr[i];
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += arr[i];
//	float ave = (float)sum / (float)size;
//	cout << "��=" << sum << ",���=" << ave << endl;
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
		cout << "Chulsoo::Chulsoo(age) ������ �Ϸ�" << endl;
	}

	Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() ������ �Ϸ�" << endl;
	}

	void introduce();

	~Chulsoo()
	{
		cout << "Chulsoo::Chulsoo() �Ҹ��� �Ϸ�" << endl;
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
	cout << "ö�� ����: " << age << endl;
}

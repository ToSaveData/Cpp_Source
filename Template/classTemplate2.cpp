
#include <iostream>
#include <vector>
using namespace std;

template <typename T> // template <typename T = int>
class MyArray
{
private:
	vector<T> list;
public:
	void add_list(T const&);
	void delete_last_list(void);
	void Show_list(void);
};

template <typename T>
void MyArray<T>::add_list(T const& element)
{
	list.push_back(element); //push_back�� �ִ°�
}

template <typename T>
void MyArray<T>::delete_last_list(void)
{
	list.pop_back(); //list�� vector���� �����ϴ� �Լ�, pop_back�� ���°�
}

template <typename T>
void MyArray<T>::Show_list(void)
{
	cout << "[MyArray list look up]" << endl;
	for (typename vector<T>::iterator i = list.begin(); i != list.end(); ++i)
		cout << *i << endl; //iterator�� ù ��ҷ� �޾ƿ�
}

template<>
class MyArray<double>
{
private:
	vector<double> list;
public:
	void add_list(double const&);
	void delete_last_list(void);
	void Show_list(void);
};

void MyArray<double>::add_list(double const& element)
{
	list.push_back(element); //push_back�� �ִ°�
}

void MyArray<double>::delete_last_list(void)
{
	list.pop_back(); //list�� vector���� �����ϴ� �Լ�, pop_back�� ���°�
}

void MyArray<double>::Show_list(void)
{
	cout << "[MyArray list look up(specialization for double)]" << endl;
	for (typename vector<double>::iterator i = list.begin(); i != list.end(); ++i)
		cout << *i << endl; //iterator�� ù ��ҷ� �޾ƿ�
}

int main()
{
	MyArray<int> array1;
	array1.add_list(1);
	array1.add_list(2);
	array1.add_list(3);
	array1.add_list(4);
	array1.add_list(5);
	array1.Show_list();

	array1.delete_last_list();
	array1.delete_last_list();
	array1.Show_list();

	MyArray<double> array2;
	array2.add_list(1.1);
	array2.add_list(2.2);
	array2.add_list(3.3);
	array2.add_list(4.4);
	array2.add_list(5.5);
	array2.Show_list();

	array2.delete_last_list();
	array2.delete_last_list();
	array2.Show_list();
	return 0;
}
//#include <iostream>
//using namespace std;
//
////class Point
////{
////private:
////	int xpos, ypos;
////public:
////	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
////	{ }
////
////	void ShowPosition() const
////	{
////		cout << '[' << xpos << ", " << ypos << ']' << endl;
////	}
////};
//
//template<typename T>
//class Point
//{
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
//	{ }
//
//	void ShowPosition() const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//};
//
//int main(void)
//{
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//
//	Point<double> pos2(2.4, 3.6);
//	pos2.ShowPosition();
//
//	Point<char> pos3('P', 'F');
//	pos3.ShowPosition();
//
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

template <typename T, int init /* =3 */> // template <typename T = int>
class MyArray
{
private: 
	vector<T> list;
public:
	void add_list(T const&);
	void delete_last_list(void);
	void Show_list(void);

	MyArray()
	{
		for (int i = 0; i < init; ++i)
			list.push_back(i);
	}

};
template <typename T, int init>
void MyArray<T, init>::add_list(T const& element)
{
	list.push_back(element); //push_back는 넣는거
}

template <typename T, int init>
void MyArray<T, init>::delete_last_list(void)
{
	list.pop_back(); //list는 vector에서 제공하는 함수, pop_back은 빼는거
}

template <typename T, int init>
void MyArray<T, init>::Show_list(void)
{
	cout << "[MyArray list look up]" << endl;
	for (typename vector<T>::iterator i = list.begin(); i != list.end(); ++i)
		cout << *i << endl; //iterator를 첫 요소로 받아옴
}

int main()
{
	MyArray<int, 3> array1;
	array1.add_list(1);
	array1.add_list(2);
	array1.add_list(3);
	array1.add_list(4);
	array1.add_list(5);
	array1.Show_list();

	array1.delete_last_list();
	array1.delete_last_list();
	array1.Show_list();
	
	MyArray<double, 4> array2;
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
#include <iostream>
using namespace std;

//template <typename T>
//T const add(T const& a, T const& b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//	double i = 5.1;
//	double j = 10.2;
//
//	cout << i << " + " << j << " = " << add(i, j) << endl;
//	cout << a << " + " << b << " = " << add(a, b) << endl;
//}

//template <class T1, typename T2>
//void ShowData(double num)
//{
//	cout << (T1)num << ", " << (T2)num << endl;
//}
//
//int main()
//{
//	ShowData <char, int> (65);
//	ShowData <char, int> (67);
//	ShowData <char, double> (68.9);
//	ShowData <short, double> (69.2);
//	ShowData <short, double> (70.4);
//}

template<typename R, typename T, typename U>
R const add(T const& a, U const& b)
{
	return a + b;
}

int main()
{
	double i = 5.1;
	int j = 5;
	cout << i << " + " << j << " = "<< add<double, double, int>(i,j) << endl;

	return 0;
}
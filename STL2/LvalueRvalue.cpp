#include <iostream>
using namespace std;

//
//int Add(int x, int y)
//	{
//		return x + y;
//	}
//
//int& inc(int& x)
//	{
//		return ++x;
//	}
//
//int main()
//{
//	int x = 5;
//	cout << x << endl;
//	int y = x * 5;
//	++x = 7;
//
//	cout << x << endl;
//	cout << y << endl;
//
//	return 0;
//}
void print(int& x)
{
	cout << "print (int &x)";
}
void print(const int& x)
{
	cout << "print (const int &x)" << endl;
}
void print(int&& x)
{
	cout << "print(int&&x)" << endl;
}

int main()
{
	const int& x = 3;
	print(x);
	print(3);

}
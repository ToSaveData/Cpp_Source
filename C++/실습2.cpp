//#include <iostream>
//using namespace std;

//int main()
//{
//	int num = 10;
//	int& ref = num;
//
//	cout << "num=" << num << endl;
//	cout << "ref=" << ref << endl; //num의 값출력
//
//	cout << "num=" << num << endl;
//	cout << "ref=" << ref << endl; //num의 값출력
//
//	cout << "&num=" << num << endl;
//	cout << "&ref=" << &ref << endl; //num의 주소출력
//	
//}


#include <iostream>
using namespace std;

void swap1(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap2(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 10, b = 20;

	cout << "a = " << a << endl;
	cout << ", b = " << b << endl;

	swap1(&a, &b);
	cout << "a = " << a << endl;
	cout << ", b = " << b << endl;

	swap(a, b);
	cout << "a = " << a << endl;
	cout << ", b = " << b << endl;

	return 0;
}

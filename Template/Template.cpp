//#include <iostream>
//using namespace std;
//
//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//const char* Max(const char* a, const char* b)
//{
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//int main()
//{
//	cout << Max(11, 15) << endl;
//	cout << Max('T', 'Q') << endl;
//	cout << Max(3.5, 7.5) << endl;
//	cout << Max("Simple", "Best") << endl;
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T const add(T const& a, T const& b)
{
	cout << "typename T" << endl;
	return a + b;
}

template<>
char* const add<char*>(char* const& a, char* const& b)
{
	cout << "specialiezed" << endl;
	return strcat(a, b);
}

char* const add(char* a, char* const& b)
{
	cout << "overloading" << endl;
	strcat(a, b);
	return a; // return strcat(a,b);
}

int main()
{
	int i = 5;
	int j = 10;
	double a = 5.1;
	double b = 10.2;
	
	char m[20] = "Hello";
	char n[20] = "World";

	cout << i << " + " << j << " = " << add(i, j) << endl;
	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << add<char*>(m, n) << endl;
	cout << add(m, n) << endl;
	
	return 0;
}
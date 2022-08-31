#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
	try 
	{
		if (num2 == 0)
			throw 0;
		cout << "몫: " << num1 / num2 << endl;
		cout << "나머지: " << num1 % num2 << endl;
	}
	catch (int expn)
	{
		cout << "first catch" << endl;
		throw;
	}
}
int main(void)
{
	try
	{
		Divide(9, 2);
		Divide(4, 0);
	}
	catch (int expn)
	{
		cout << "second catch" << endl;
	}

//	int a, b, result;
//	cout << "두 개의 숫자 입력: ";
//	cin >> a >> b;
////	cout << "a/b를 수행합니다. a,b를 입력하세요." << endl;
//	/*cout << "a: ";	
//	cout << "b: ";*/
//	try
//	{
//		if (b == 0)
//			throw b;
//		cout << "나눗셈의 몫: " << a / b << endl;
//		cout << "나눗셈의 나머지: " << a % b << endl;
//	}
//	catch(int expn)
//	{
//		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
//		cout << "프로그램을 다시 실행하세요." << endl;
//	}
//
//	cout << "end of main" << endl;
	return 0;
}
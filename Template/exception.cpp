#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
	try 
	{
		if (num2 == 0)
			throw 0;
		cout << "��: " << num1 / num2 << endl;
		cout << "������: " << num1 % num2 << endl;
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
//	cout << "�� ���� ���� �Է�: ";
//	cin >> a >> b;
////	cout << "a/b�� �����մϴ�. a,b�� �Է��ϼ���." << endl;
//	/*cout << "a: ";	
//	cout << "b: ";*/
//	try
//	{
//		if (b == 0)
//			throw b;
//		cout << "�������� ��: " << a / b << endl;
//		cout << "�������� ������: " << a % b << endl;
//	}
//	catch(int expn)
//	{
//		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
//		cout << "���α׷��� �ٽ� �����ϼ���." << endl;
//	}
//
//	cout << "end of main" << endl;
	return 0;
}
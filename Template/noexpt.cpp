#include <iostream>
using namespace std;

void handler()
{
	cout << "in handler" << endl;
}

void f1(void) noexcept(false)
{
	cout << "About to throw 1" << endl;
	if (1)
		throw 1;
}

void f2(void) /*noexcept*/  //except�� �ִµ� noecept�� ���� �״´�
{
	try 
	{
		f1();
	}
	
	catch (...)
	{
		handler();
		//throw 1; //�� �ּ��� Ǯ�� main �� �Ʒ��� catch�� �۵�
	}
}

int main()
{
	//f1(); //throw�� �ϰ� catch�� �� �ϸ� �״´�
	try 
	{
		f2();
	}
	
	catch (...)
	{
		cout << "Caught exception from f2" << endl;
	}

	return 0;
}
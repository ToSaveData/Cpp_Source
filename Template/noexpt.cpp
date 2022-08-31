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

void f2(void) /*noexcept*/  //except가 있는데 noecept를 쓰면 죽는다
{
	try 
	{
		f1();
	}
	
	catch (...)
	{
		handler();
		//throw 1; //이 주석을 풀면 main 문 아래의 catch가 작동
	}
}

int main()
{
	//f1(); //throw를 하고 catch를 안 하면 죽는다
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
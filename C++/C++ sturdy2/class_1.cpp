#include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreatInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }

public:
	AAA(int n) : num(n) {}

};

class BBB
{
private:

	AAA mem;
public:
	BBB(const AAA& ref) : mem(ref) {}

};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref) { mem = ref; }
};

int main(void)
{
	AAA obj1(12);
	cout << "*****************************" << endl;
	BBB obj2(obj1);
	cout << "*****************************" << endl;
	CCC obj3(obj1);
	return 0;
}

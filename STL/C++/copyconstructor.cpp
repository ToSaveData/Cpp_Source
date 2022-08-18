#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n): num(n)
	{ }
	SoSimple(const SoSimple &copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	//SimpleFuncObj(obj).AddNum(30).ShowData(); => 이름을 따로 안 붙여도 된다. 가독성이 안좋다.
	SoSimple obj2 = SimpleFuncObj(obj);
	obj2.AddNum(30);
	obj2.ShowData();
	cout << "함수호출 후" << endl;

	return 0;
}

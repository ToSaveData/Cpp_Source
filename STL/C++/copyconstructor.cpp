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
	cout << "return ����" << endl;
	return ob;
}

int main()
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	//SimpleFuncObj(obj).AddNum(30).ShowData(); => �̸��� ���� �� �ٿ��� �ȴ�. �������� ������.
	SoSimple obj2 = SimpleFuncObj(obj);
	obj2.AddNum(30);
	obj2.ShowData();
	cout << "�Լ�ȣ�� ��" << endl;

	return 0;
}

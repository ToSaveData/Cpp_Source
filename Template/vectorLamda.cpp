#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Multiplier
{
private:
	int first;
	int second;

public:
	Multiplier(int f, int s)
	{
		first = f;
		second = s;
	}

	int getResult() {return first * second;}
	int getF() { return first; }
	int getS() { return second; }
};

int main()
{
	vector<Multiplier> multipleData;

	for (int i = 0; i < 10; i++)
	{
		Multiplier multiple = Multiplier(rand() % 10, rand() % 10);
		multipleData.push_back(multiple);
	}

	for (vector<Multiplier>::iterator iter1 = multipleData.begin();
		iter1 != multipleData.end(); iter1++)
	{
		cout << iter1->getF() << " ";
		cout << iter1->getS() << endl;
	}

	cout << "���ĵ��� ���� ���" << endl;
	for (vector<Multiplier>::iterator iter = multipleData.begin();
		iter != multipleData.end(); iter++)
		cout << iter->getResult() << endl;

	sort(multipleData.begin(), multipleData.end(), [](Multiplier& m1, Multiplier& m2)
		{
			return m1.getResult() < m2.getResult();
		});

	cout << "���ĵ� ���" << endl;
	for (vector<Multiplier>::iterator iter = multipleData.begin();
		iter != multipleData.end(); iter++)
		cout << iter->getResult() << endl;
	
	return 0;
}
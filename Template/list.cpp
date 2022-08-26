#include <list>
#include <iostream>
using namespace std;

//int main()
//{
//	list<int> intList;
//
//	for (int i = 0; i < 10; i++)
//		intList.push_back(i);
//	intList.remove(5);
//
//	list<int>::iterator it;
//	
//	for (it = intList.begin(); it != intList.end(); it++)
//		cout << *it << endl;
//	return 0;
//}

int main()
{
	list<int> It;
	list<int> It2;
	It.push_back(10);
	It.push_back(20);
	It.push_back(30);
	It.push_front(-10);
	It.push_front(-20);
	It.push_front(-30);

	for (auto i = It.rbegin(); i != It.rend(); i++) //rbegin(), rend()를 통해 역순 배열 가능
		cout << *i << " ";
	cout << endl;

	for (auto i = 0; i < 10; i++)
		It2.push_back(i);

	for (auto i = It2.begin(); i != It2.end(); i++)
		cout << *i << " ";
	cout << endl;

	for (auto p = It.begin(); p != It.end(); p++)
	{
		if (*p == 10)
		{
			It.splice(p, It2); //splice는 두 개를 결합함, 10인 자리에 0~9까지 삽입
			break;
		}
	}

	for (auto i = It.begin(); i != It.end(); i++)
		cout << *i << " ";
	cout << endl;

	return 0;
}
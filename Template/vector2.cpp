#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Person
{
private:
	int age;
	string name;

public:
	Person(const int a, const string& n) : age(a), name(n) {}
	int getAge() { return age; }
	string getName() { return name; }
};

int main(int argc, char** argv)
{
	//C++ 03
	Person p1{ 20,"Tom" };
	Person p2{ 19,"Jane" };

	//C++11 유니폼 초기화
	vector<Person> vec
	{
		{21,"Smith"}, {39,"John"}, {23,"Mary"}, {45,"Ted"}
	};

	for_each(vec.begin(), vec.end(), [](Person p) // for_each(시작점, 끝점, 함수) - 알고리즘 헤더 내부 함수
	{
		cout << p.getAge() << ", " << p.getName() << endl;
	});

	//for_each(vec.begin(), vec.end(), [=](int i) {cout << v[i++] << " ";); // 다른 무언가가 더 필요함

	return 0;
}

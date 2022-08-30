#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> m;
	m.insert(make_pair("A", 10));
	m.insert(make_pair("B", 20));
	m.insert(make_pair("C", 30));
	m.insert(make_pair("D", 40));
	m.insert(make_pair("E", 50));
	m["F"] = 100;
	m["E"] = 150;
	//m.insert(make_pair("E", 150));
	for (auto i = m.begin(); i != m.end(); ++i)
		cout << "[" << i->first << " " << i->second << "]";
	cout << endl;
	auto i = m.find("A");

	//m.insert(make_pair("E", 150));  //추가나 변경이 발생X
	cout << i->first << " : " << i->second << endl;
	

	return 0;
}
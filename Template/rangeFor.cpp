#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[5] = { 0,1,2,3,4 };
	for(int i:arr)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::const_iterator it;
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	for (auto i : v)
		cout << i << " ";
	return 0;
}
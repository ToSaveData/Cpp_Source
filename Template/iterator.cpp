#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[10] = { 97,44, 23, 55, 61, 12, 3, 75, 27, 84 };
	cout << "정렬된 배열 : ";
	
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;

	vector<string> strings;
	string s;
	cout << "문자열을 입력하세요 : ";
	while (cin >> s)
		strings.push_back(s);

	sort(strings.begin(), strings.end());
	cout << "정렬된 문자열: ";
	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
		cout << *it << " ";
	cout << endl;

	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end());

	cout << "vector 정렬 후 \n";
	vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		cout << *it;

	return 0;
	
}
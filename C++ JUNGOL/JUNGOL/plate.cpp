#include <iostream>
using namespace std;

int main()
{
	int cnt = 10;
	string n; //'((((('
	char arr[51] = { };
	/*n = "((((((((((";
	cout << sizeof(n);*/

	cin >> n;
	if (n.size() < 3 || n.size() > 50)
	{
		cout << "input error" << endl;
		return 0;
	}

	for (int i = 0; i < n.size(); i++)
	{
		arr[i] = n[i];
		if (i == 0)
		{	}
		else if (arr[i - 1] == arr[i])
			cnt += 5;
		else
			cnt += 10;
	}
	cout << cnt << endl;


	return 0;
}
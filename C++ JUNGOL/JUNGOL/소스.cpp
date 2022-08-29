#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j, len, fin;
	int arr[6];
	string a[5];

	for (i = 0; i < 5; i++)
		cin >> a[i];

	for (i = 0; i < 5; i++)
	{
		len = a[i].size();
		arr[i] = len;
	}

	for (i = 0; i < 5; i++)
		for (j = 1; j <= 4; j++)
		{
			if (arr[j] < arr[j - 1])
			{
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
			}
		}

	for (i = 0; i < arr[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[j][i] == ' ')
				cout << "";
			else
				cout << a[j][i];
		}
	}

	return 0;
}
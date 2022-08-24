#include <iostream>
using namespace std;

int main()
{
	int i, j, k, s, div= 0;
	int arr[14];

	cin >> k;
	if (k < 7 || k > 13)
		return 0;

	for (i = 0; i < k; i++)
	{
		cin >> s;
		arr[i] = s;
	}
	


	for (i = 0; i < 6; i++)
	{
		for (j = 1; j < 6; j++)
		{
			if (arr[j-1] > arr[j])
			{
				int tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for (i = 0; i < 6; i++)
	cout << arr[i]<< " ";

	return 0;
}
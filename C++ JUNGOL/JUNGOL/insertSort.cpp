#include <iostream>
using namespace std;

int main()
{
	int i, j, k, n, tmp, cnt = 0;
	int arr[101];

	cin >> n;
	if (n < 4 || n>100)
	{
		cout << "input error" << endl;
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for (i = 1; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{				
			if (i - j > 0)
			{
				if (arr[i] < arr[j] && 0 == j)
				{
					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				//	cout << "arr[i]: " << arr[i] << ", arr[j]: " << arr[j] << endl;
				}

				else if(arr[i - j + 1] < arr[i - j] && 0 < j)
				{
					tmp = arr[i - j];
					arr[i - j] = arr[i - j + 1];
					arr[i - j + 1] = tmp;
				//	cout << "arr[i-j]: " << arr[i-j] << ", arr[i-j+1]: " << arr[i-j+1] << endl;
					//cnt++;
				}

			}
		}
		for (k = 0; k < n; k++)
			cout << arr[k] << " ";

		cout << endl;
	}


	//for(i=0;i<n;i++)
	//cout << arr[i] << " ";

	return 0;
}
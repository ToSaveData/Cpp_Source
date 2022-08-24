#include <iostream>
using namespace std;

int main()
{
	int m, n, cnt1, cnt2 = 0;
	int i, j;

	cin >> m;
	cin >> n;

	if (1 > m || m > n || n > 2000000)
	{
		cout << "input error" << endl;
		return 0;
	}

	for (i = m, cnt1 = 0; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if ((0 == i % 2 && 2 != i) || (0 == i % 3 && 3 != i) || \
				(0 == i % 5 && 5 != i) || (0 == i % 7 && 7 != i))
				break;
			
			else if (0 == i % j)
				cnt1++;
		}
	//	cout << cnt1<< " "<<endl;
		if(2 == cnt1)
			cnt2++;
		
		cnt1 = 0;
	}

	cout << cnt2;

	return 0;
}
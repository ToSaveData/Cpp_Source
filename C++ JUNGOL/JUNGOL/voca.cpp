#include <iostream>
#include <sstream>
using namespace std;

string storage[100];

int main()
{

	string tmp[100];
	string input;
	int cnt2 = 0, cnt1 = 0, flag = 0;

	do
	{
		getline(cin, input);
		if (input == "END")	return 0;
		stringstream SS(input);

		for (; SS >> tmp[cnt2]; cnt2++);
	
		if (flag == 0)	for (; SS >> storage[cnt1]; cnt1++);

		if (flag == 1)
		{
			for (int i = 0; i < cnt2; i++)
			{
				for (int j = 0; j < cnt1; j++)
					if (storage[j] != tmp[i])
						SS >> storage[cnt1++];
			}
		}

		for (int i = 0; i < cnt1; i++)
			cout << storage[i] << " ";
		
		cout << endl;
		flag = 1;
	} while (1);

	return 0;
}
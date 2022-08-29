#include <iostream>
#include <sstream>
using namespace std;

int main()
{

	string S;
	string W[50];
	int i = 0, cnt = 0;
	//char arr[50][100];
	
	getline(cin, S);
	if (S.length() < 1 || S.length() > 100)
		return 0;

	stringstream SS(S);
	
	for (; SS >> W[cnt]; cnt++);
	
	//for (i = 0; i < 50; i++)
	//{
	//	if (W[i] == "")	break;
	//	cout << W[i] << endl;
	//}

	/*do{
		SS >> W[i];
	}while (W[i++] != "");*/
	
	for (i = 0; i < cnt; i++)
	{
		for (int j = 0; j < cnt - 1; j++)
		{
			//if (W[i] == "")	break;

			if (W[j].compare(W[j+1]) == 1) //compare도 왼쪽이 크면 1
			{
				string tmp = W[j];
				W[j] = W[j + 1];
				W[j + 1] = tmp;
			}
		}
	}
	
	for (i = 0; i < cnt; i++)
	{
		//if (W[i] == "")	break;
		cout << W[i] << " ";
	}

	return 0;
}
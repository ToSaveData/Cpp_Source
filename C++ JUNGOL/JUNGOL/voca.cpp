#include <iostream>
#include <sstream>
using namespace std;


int main()
{
	string storage[100];
	string tmp[100];
	string sentence;
	string scan;
	string input;
	int cnt3 = 0, cnt2 = 0, cnt1 = 0;
	
	getline(cin, input);
	if (input == "END")	return 0;
	sentence = input;

	stringstream SS(input);
	for (; SS >> storage[cnt1]; cnt1++);
	for (int i = 0; i < cnt1; i++)
		cout << storage[i] << " ";
	cout << endl;
	SS.clear();
	
	do
	{
		getline(cin, input);
		if (input == "END")	return 0;
		scan = input;
		stringstream SS(input);
		for (; SS >> tmp[cnt2]; cnt2++);
		for (int i = 0; i < cnt2; i++) 
		{
			{
				if (sentence.find(tmp[i]) == -1 || tmp[i] == "is")
					storage[cnt1++] = tmp[i];
				else if (sentence.find("is") != -1 && sentence.find(tmp[i]) == -1)
					storage[cnt1++] = tmp[i]; 
			}
				/*if(sentence.find("is") == -1 && sentence.find(tmp[i]) == -1)
					storage[cnt1++] = "is";					
				else if (sentence.find("is") != -1 && tmp[i] == "is")
					storage[cnt1++] = tmp[i];
				else if (sentence.find("is") != -1 && sentence.find(tmp[i]) == -1)
					storage[cnt1++] = tmp[i];*/
				//else if(sentence.find("is") == -1 && sentence.find(tmp[i]) != -1)
			cnt3++;
		}

		for (int i = 0; i < cnt1; i++)
			cout << storage[i] << " ";
		if (cnt3 > 0)
		{
			for (int i = cnt3; i > 0; i--)
			{
				sentence = sentence.append(" ");
				sentence = sentence.append(storage[cnt1 - i]);
			}
		}

		cout << endl;
		SS.clear();
		cnt3 = 0;
	} while (1);

	return 0;
}
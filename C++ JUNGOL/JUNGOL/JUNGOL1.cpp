#include <iostream>
using namespace std;

int main()
{
	string S, T;

	cin >> S;
	if (S.length() < 1 || S.length() > 100)
	{
		cout << "input error" << endl;
		return 0;
	}
	cin >> T;
	if (T.length() < 1 || T.length() > S.length())
	{
		cout << "input error" << endl;
		return 0;
	}
	
	for (int i = 0; i < T.length(); i++)
	{
		while (S.find(T[i])<=S.length() && S.find(T[i]) >= 0)
		{
			string sub = S.substr(S.find(T[i]) + 1, S.length());
			S.replace(S.find(T[i]), S.length(), sub);
		}

	}
		//string sub = S.substr(S.find(T) + T.length(), S.length());
		//S.erase(S.find(T), S.find(T) + sub.length());
		//cout << sub;

	cout << S;
	return 0;
}
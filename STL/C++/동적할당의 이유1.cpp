#include <iostream>
using namespace std;

char* input()
{
	char s[BUFSIZ];
	cin >> s;
	return s;
}

void print(char* s)
{
	cout << s;
}

int main()
{
	char* s = input();
	print(s);
	return 0;
}

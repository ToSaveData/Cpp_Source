#include <iostream>
using namespace std;

int main()
{
	int *p, i;
	for (i = 0; i < 65535; i++)
	{
		p = new int[10000000];
		cout << i << endl;
	}

}
#include <iostream>
using namespace std;

long long factorial(int n)
{
	return (n==1)? n * 1 : n * factorial(n - 1);
}

int main()
{
	int n;
	cin >> n;
	if (n < 1 || n>15)
		return 0;

	for (int i = n; i > 0; i--) {
		if(i != 1)
		cout << i << "! = " << i << " * " << i - 1 << "!" << endl;
		else if (i == 1) {
			cout << "1! = 1" << endl;
			cout<<factorial(n);
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	float f = 0.0F;
	int i = 0;
	for (f = 0.0; f <= 50.0f; f += 0.1f,i++)
	{
		cout << "f: " << f << endl;
	}
	cout << "i: " << i << endl;

	return 0;
}
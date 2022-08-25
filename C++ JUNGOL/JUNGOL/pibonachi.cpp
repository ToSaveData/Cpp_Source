#include <iostream>
using namespace std;

long long P(int a)
{
	return (a<=2)? 1 : P(a - 1) + P(a - 2);
}

int main()
{

	return 0;
}

//수동 피보나치
// long long arr[10000];
//do
//{
//	arr[i+2] = arr[i] + arr[i + 1];
//	i++;
//}while (arr[i + 2] <= 2100000000);

/*for(int k = 0; k<93;k++)
cout << arr[k] << endl;*/
//if (arr[n] >= 0)
//cout << arr[n] % 10000;
//else
//cout << " ";
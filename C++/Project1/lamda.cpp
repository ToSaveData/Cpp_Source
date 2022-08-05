#include <iostream>
using namespace std;

int main()
{
	[](int x, int y) {cout <<"합은 " << x + y; }(2, 3); //x,y의 합을 출력하는 람다식

	return 0;
}
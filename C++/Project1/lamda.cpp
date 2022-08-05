//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	[=] () mutable {cout <<"i : " <<++i; }(); //x,y의 합을 출력하는 람다식
//	cout << ">>i : " << i << endl;
//
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	auto love = [](string a, string b) { cout << a << "보다 " << b << "가 좋아" << endl; };
	love("돈", "너");
	love("냉면", "만두");

	return 0;
}
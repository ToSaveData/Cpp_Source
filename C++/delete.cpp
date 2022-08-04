#include <iostream>
using namespace std;

int main()
{
	int* p = NULL;
	p = new int(0);  // 동적메모리 할당 및 초기화
	if (p == NULL)
	{
		cout << "동적메모리 할당 실패" << endl;
		return 1;
	}
	
	cout << "정수를 입력하세요 :";
	cin >> *p; //동적 메모리 사용
	cout << "입력된 정수는 " << p[0] << "\n"; // 동적메모리 사용
	delete p; // 동적메모리 해제
	p = NULL;
	return 0;

}
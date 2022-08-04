//scanf와 printf를 이용한 C예제
//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	scanf("%d", &number);
//	printf("모니터 출력: %d \n", number);
//}

//cin과 cout을 이용한 C++예제
//#include <iostream>
//using namespace std; 
//int main()
//{
//	int number = 0;
//	cin >> number;
//	cout << "모니터 출력: " << number << endl;
//}




//#include <iostream>
//#include "header1.h"
//#include "header2.h"
////using namespace square;
//////using namespace rectangle;
////
////int main()
////{
////	int y = x;
////
////	return 0;
////}
//
//namespace BestComImpl
//{
//	void SimpleFunc(void);
//}
//
//namespace ProgComImpl
//{
//	void SimpleFunc(void);
//}
//
//int main(void)
//{
//	BestComImpl::SimpleFunc();
//	ProgComImpl::SimpleFunc();
//	return 0;
//}
//
//void BestComImpl::SimpleFunc(void)
//{
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//}
//
//void ProgComImpl::SimpleFunc(void)
//{
//	std::cout << "ProgCom이 정의한 함수" << std::endl;
//}


//#include <iostream>
//
//using namespace std;
//
//namespace AAA {
//	namespace BBB {
//		namespace CCC {
//			int num1;
//			int num2;
//						}
//					}
//
//}
//
//int main(void)
//{
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC;
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char x, y;
//	x = -128;
//	y = -x;
//
//	if (x == y)
//		printf("1");
//	if ((x - y) == 0)
//		printf("2");
//	if ((x + y) == 2 * x)
//		printf("3");
//	if (x != -y)
//		printf("4");
//
//	printf("%d, %d", x, y);
//	
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char c, * pc;
//	int i, * pi;
//	float f, * pf;
//	double d, * pd;
//	cout << "char: " << sizeof(c) << "/" << sizeof(pc) << endl;
//	cout << "int: " << sizeof(i) << "/" << sizeof(pi) << endl;
//	cout << "float: " << sizeof(f) << "/" << sizeof(pf) << endl;
//	cout << "double: " << sizeof(d) << "/" << sizeof(pd) << endl;
//	cout << sizeof(double*) << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int value = 100;
//	int *pointerValue = &value;
//
//	cout << value << endl;
//	cout << &value << endl;
//	cout << pointerValue << endl;
//	cout << *pointerValue << endl;
//	cout << &pointerValue << endl;
//
//	int **ppointerValue = &pointerValue; //n중포인터를 표시하기 위해서 *의 갯수를 맞춰야 한다.
//	
//	cout << ppointerValue << endl;
//	cout << *ppointerValue << endl;
//
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int &ref = num; //ref는 num의 별명
	
	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl; //num의 값 출력	
	
	ref = 100; //num = 100;을 수행함

	cout << "num: " << num << endl;
	cout << "ref: " << ref << endl; //num의 값 출력
	
	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;//num의 주소 출력
	
	return 0;
}
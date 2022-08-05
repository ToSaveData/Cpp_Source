//#include <iostream>
//using namespace std;
//
//int main()
//{
//	struct S{
//		int i;
//		int j;
//	};
//
//
//	//const S s1 = { 8 };  위반
//	//int arr[10] = { 10 };   위반
//	//int arr[3][2] = { 1,2,3,4,5,6 };  위반
//	
//	const S s0 = { 0 };
//	const S s1 = { 0, 8 };
//	const S s2 = { 0, 0 };
//	int arr[10] = { 0 };
//	int arr1[3][2] = { {1,2},{3,4},{5,6} };
//
//	cout << s1.i << s1.j << endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

struct Chulsoo
{
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool isHuman;

	void introduce(){}
	void eat(const char *food) { cout << food << endl; }
	void sleep(){}
	void drive(const char *destination) { cout << destination << endl; }
};

int main(void)
{
	Chulsoo chulsoo = { "철수", "남성", "작가", "diligent" ,32, true};

	chulsoo.drive("레스토랑");
	chulsoo.eat("스테이크");

	return 0;
}
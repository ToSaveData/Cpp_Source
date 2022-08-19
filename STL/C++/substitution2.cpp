#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(" << n << ")" << endl;
	}
	Number& operator = (const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void printNumber()
	{
		cout << num << endl;
	}
};

int main()
{
	Number num1(3.14);
	//Number num2{3.14}; // 중괄호{}를 쓰면 자동 형변환 불가. 반드시 그 타입이어야 컴파일 가능
	num1 = 30; //1단계: 임시객체(num(30)의 호출), 2단계: operator 호출, 3단계: 대입
	num1.printNumber();
	
	return 0;
}
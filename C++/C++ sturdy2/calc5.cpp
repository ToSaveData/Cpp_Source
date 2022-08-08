//클래스를 사용해서 계산기를 작성하시오.
//1. Calc클래스를 생성, 멤버 변수와 멤버 함수를 구현, 생성자를 이용한 계산값의 초기화,
//계산기 내에서 사용하는 값들을 클래스의 멤버 변수로 설정
//showResult() 멤버함수를 이용한 계산 결과 출력

#include <iostream>
using namespace std;

class Calc
{
public:
	float a;
	float b;
	float result;
	char i;

	void add(float a, float b, float result);
	void sub(float a, float b, float result);
	void mul(float a, float b, float result);
	void div(float a, float b, float result);
	float showResult(float a, float b, float result);
};
void Calc::add(float a, float b, float result)
{
	result = a + b;
}
void Calc::sub(float a, float b, float result)
{
	result = a - b;
}
void Calc::mul(float a, float b, float result)
{
	result = a * b;
}
void Calc::div(float a, float b, float result)
{
	result = a / b;
}

float showResult(float a, float b, float result, const char i)
{
		if (i == '+')
	{
			Calc::add();
	}

	else if (i == '-')
	{
		 sub(a, b, &result);
	}

	else if (i == '*')
	{
		 mul(a, b, &result);
	}

	else if (i == '/')
	{
		do {
			printf("0으로 나눌 수 없습니다.\n");
			scanf("%f%c%f=", &a, &i, &b);

		} while (b == 0);


		 div(a, b, &result);
	}

}

int main()
{

	scanf("%f%c%f=", &Calc.a, &Calc.i, &Calc.b);

	do {
		printf("0으로 나눌 수 없습니다.\n");
		scanf("%f%c%f=", &Calc.a, &Calc.i, &Calc.b);

	} while (b == 0);

	return 0;
}
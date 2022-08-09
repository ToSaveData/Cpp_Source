//클래스를 사용해서 계산기를 작성하시오.
//1. Calc 클래스를 생성
//? 멤버 변수와 멤버 함수를 구현
//? 멤버 변수는 private으로 접근 지정자를 설정
//? 생성자를 이용한 계산값의 초기화
//? 계산기 내에서 사용하는 값들을 클래스의 멤버 변수로 설정
//? showResult() 멤버 함수를 이용한 계산 결과 출력

#include <iostream>
using namespace std;

class Calc
{
private:
	float a=0;
	float b=0;
	float result=0;
	char i='+';
	
	void showResult();
};

void Calc::showResult()
{
	do {
		scanf("%f%c%f=", &a, &i, &b);

		if (b == 0 && i == '/')
			printf("0으로 나눌 수 없습니다.\n");
	} while (b == 0 && i == '/');


	if (i == '+')
	{
		result = a + b;
	}

	else if (i == '-')
	{
		result = a - b;
	}

	else if (i == '*')
	{
		result = a * b;
	}

	else if (i == '/')
	{

		result = a / b;
	}

}

int main()
{
	float a, b, result;
	char i;
	Calc abc(a, b, result, i);

	abc.showResult();
	
	return 0;
}
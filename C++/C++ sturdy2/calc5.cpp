//Ŭ������ ����ؼ� ���⸦ �ۼ��Ͻÿ�.
//1. CalcŬ������ ����, ��� ������ ��� �Լ��� ����, �����ڸ� �̿��� ��갪�� �ʱ�ȭ,
//���� ������ ����ϴ� ������ Ŭ������ ��� ������ ����
//showResult() ����Լ��� �̿��� ��� ��� ���

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
			printf("0���� ���� �� �����ϴ�.\n");
			scanf("%f%c%f=", &a, &i, &b);

		} while (b == 0);


		 div(a, b, &result);
	}

}

int main()
{

	scanf("%f%c%f=", &Calc.a, &Calc.i, &Calc.b);

	do {
		printf("0���� ���� �� �����ϴ�.\n");
		scanf("%f%c%f=", &Calc.a, &Calc.i, &Calc.b);

	} while (b == 0);

	return 0;
}
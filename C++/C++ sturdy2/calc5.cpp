//Ŭ������ ����ؼ� ���⸦ �ۼ��Ͻÿ�.
//1. Calc Ŭ������ ����
//? ��� ������ ��� �Լ��� ����
//? ��� ������ private���� ���� �����ڸ� ����
//? �����ڸ� �̿��� ��갪�� �ʱ�ȭ
//? ���� ������ ����ϴ� ������ Ŭ������ ��� ������ ����
//? showResult() ��� �Լ��� �̿��� ��� ��� ���

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
			printf("0���� ���� �� �����ϴ�.\n");
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
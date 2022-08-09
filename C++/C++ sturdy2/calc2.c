//사칙연산에 대한 함수를 구현 add(), sub(), mul(), div()
//call by reference를 이용해서 전달, 포인터를 이용한 구현
#include <stdio.h>
void add(float ptr1, float ptr2, float* sum);
void sub(float ptr1, float ptr2, float* gap);
void mul(float ptr1, float ptr2, float* mul);
void div(float ptr1, float ptr2, float* div);

void add(float ptr1, float ptr2, float* sum)
{
	*sum = ptr1 + ptr2;
	printf("%f\n", *sum);
}

void sub(float ptr1, float ptr2, float* gap)
{
	*gap = ptr1 - ptr2;
	printf("%f\n", *gap);
}

void mul(float ptr1, float ptr2, float* mul)
{
	*mul = ptr1 * ptr2;
	printf("%f\n", *mul);
}

void div(float ptr1, float ptr2, float* div)
{
	*div = ptr1 / ptr2;
	printf("%f\n", *div);
}

int main()
{
	float a, b;
	float result;
	char i;

	do {
		scanf("%f%c%f=", &a, &i, &b);

		if (b == 0 && i =='/')
			printf("0으로 나눌 수 없습니다.\n");
	} while (b == 0 && i == '/');

	
	if (i == '+')
	{
		 add(a, b, &result);
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
		
		 div(a, b, &result);
	}


	return 0;
}
//사칙연산에 대한 함수를 구현 add(), sub(), mul(), div()
//call by reference를 이용해서 전달, 포인터를 이용한 구현
#include <stdio.h>
void add(int ptr1, int ptr2, int* sum);
void sub(int ptr1, int ptr2, int* gap);
void mul(int ptr1, int ptr2, int* mul);
void div(int ptr1, int ptr2, int* div);

void add(int ptr1, int ptr2, int *sum)
{
	*sum = ptr1 + ptr2;
}

void sub(int ptr1, int ptr2, int* gap)
{
	int gap;
	gap = ptr1 - ptr2;
	printf("%d\n", gap);
}

void mul(int ptr1, int ptr2, int* mul)
{
	int mul;
	*mul = ptr1 * ptr2;
	printf("%d\n", mul);
}

void div(int ptr1, int ptr2, int* div)
{
	int div;
	*div = ptr1 / ptr2;
	printf("%d\n", div);
}

int main()
{
	float a, b, result;
	char i;


	scanf("%f%c%f=", &a, &i, &b);
	
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
		do {
			printf("0으로 나눌 수 없습니다.\n");
			scanf("%f%c%f=", &a, &i, &b);

		} while (b == 0);


		 div(a, b, &result);
	}


	return 0;
}
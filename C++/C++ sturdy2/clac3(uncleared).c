// 함수의 인자를 구조체를 사용해서 계산기를 작성하시오.
//1. calType 구조체를 이용하여 하나의 타입을 생성(typedef 사용)
//2. 1개의 인자로 함수를 호출(void add(calType *data)
#include <stdio.h>

typedef struct {
	float x;
	float y;
	float z;
}calType;



int main()
{
	calType data;
	char i;
	
	scanf("%f%c%f=", &a, &i, &b);

	if (i == '+')
	{
		add(calType * data);
	}

	else if (i == '-')
	{
		sub(calType * data);
	}

	else if (i == '*')
	{
		mul(calType * data);
	}

	else if (i == '/')
	{
		do {
			printf("0으로 나눌 수 없습니다.\n");
			scanf("%f%c%f=", &a, &i, &b);

		} while (b == 0);


		div(calType * data);
	}


	return 0;
}

void add(calType* data);
void sub(calType* data);
void mul(calType* data);
void div(calType* data);

void add(calType* data)
{
	calType->data = x + y;
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




// 함수의 인자를 구조체를 사용해서 계산기를 작성하시오.
//1. calType 구조체를 이용하여 하나의 타입을 생성(typedef 사용)
//2. 1개의 인자로 함수를 호출(void add(calType *data)
#include <stdio.h>

typedef struct {
	float x;
	float y;
	float z;
	char i;
}calType;

void add(calType* data);
void sub(calType* data);
void mul(calType* data);
void div(calType* data);

void add(calType* data)
{
	data->z = data->x + data->y;
}

void sub(calType* data)
{
	data->z = data->x - data->y;
}

void mul(calType* data)
{
	data->z = data->x * data->y;
}

void div(calType* data)
{
	data->z = data->x / data->y;
}


int main()
{
	calType data;
	
	do {
		scanf("%f%c%f=", &data.x, &data.i, &data.y);
		if (data.y == 0 && data.i == '/')
			printf("0으로 나눌 수 없습니다.\n");
	} while (data.y == 0 && data.i == '/');

	if (data.i == '+')
	{
		add(&data);
	}

	else if (data.i == '-')
	{
		sub(&data);
	}

	else if (data.i == '*')
	{
		mul(&data);
	}

	else if (data.i == '/')
	{
		div(&data);
	}

	printf("%.2f %c %.2f = %.2f", data.x, data.i, data.y, data.z);

	return 0;
}





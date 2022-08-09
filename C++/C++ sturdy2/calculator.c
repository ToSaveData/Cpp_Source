//사칙계산기
//1. 조건문, 반복문 사용, 2.scanf(), printf() 사용
//입력: 1 + 3 =  출력: 1 + 3 = 4
//1. 입출력구현, 2.함수 사용, 3. 구조체, 4. 함수포인터, 5.
#include <stdio.h>


int main()
{
	float a, b;
	char i;
	do {
		
		scanf("%f%c%f=", &a, &i, &b);
		if(b == 0 && i =='/')
		printf("0으로 나눌 수 없습니다.\n");
	} while (b == 0 && i == '/');
	

	if (i == '+')
	{
		printf("%.2f + %.2f = %.2f", a, b, a+b);
	}
	
	else if(i == '-')
	{
		printf("%.2f - %.2f = %.2f", a, b, a-b);
	}

	else if(i == '*')
	{
		printf("%.2f * %.2f = %.2f", a, b, a*b);
	}

	else if(i == '/')
	{
		printf("%.2f / %.2f = %.2f", a, b, a/b);
	}

	return 0;
}
//��Ģ����
//1. ���ǹ�, �ݺ��� ���, 2.scanf(), printf() ���
//�Է�: 1 + 3 =  ���: 1 + 3 = 4
//1. ����±���, 2.�Լ� ���, 3. ����ü, 4. �Լ�������, 5.
#include <stdio.h>


int main()
{
	float a, b;
	char i;
	do {
		
		scanf("%f%c%f=", &a, &i, &b);
		if(b == 0 && i =='/')
		printf("0���� ���� �� �����ϴ�.\n");
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
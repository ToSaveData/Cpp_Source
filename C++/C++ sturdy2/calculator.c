//��Ģ����
//1. ���ǹ�, �ݺ��� ���, 2.scanf(), printf() ���
//�Է�: 1 + 3 =  ���: 1 + 3 = 4
//1. ����±���, 2.�Լ� ���, 3. ����ü, 4. �Լ�������, 5.
#include <stdio.h>


int main()
{
	float a, b;
	char i;
	
	scanf("%f%c%f=", &a, &i, &b);

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
		do {
			printf("0���� ���� �� �����ϴ�.\n");
			scanf("%f%c%f=", &a, &i, &b);
			
		} while (b == 0);


		printf("%.2f / %.2f = %.2f", a, b, a/b);
	}

	return 0;
}
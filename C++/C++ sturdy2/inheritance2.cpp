#include "inheritance.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	for (i = 0; i < len; i++)
		*(str + i) = this->at(i); //at�� ��Ʈ��Ŭ�������� �����ϴ� �Լ�, 
	*(str + i) = '\0';
}

int main()
{
	char str[BUFSIZ]; //���̺귯���� ��ũ���Լ�, ���ۻ���� �˻��ϴ� ����
	StringCharArray a("Hello World!");
	a.toCharArray(str);
	cout << str << endl;
	return 0;
}

#include "inheritance.h"

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	for (i = 0; i < len; i++)
		*(str + i) = this->at(i); //at은 스트링클래스에서 제공하는 함수, 
	*(str + i) = '\0';
}

int main()
{
	char str[BUFSIZ]; //라이브러리의 매크로함수, 버퍼사이즈를 검사하는 역할
	StringCharArray a("Hello World!");
	a.toCharArray(str);
	cout << str << endl;
	return 0;
}

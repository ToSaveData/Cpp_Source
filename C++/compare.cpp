#include "compare.h"

int Compare(const int a, const int b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

int Compare(const float a, const float b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}

int Compare(const char a, const char b)
{
	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;

}

int Compare(const char str1[], const char str2[])
{
	int i;

	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if (str1[i] > str2[i])
			return 1;
		else if (str1[i] < str2[i])
			return -1;
		else;
	}

	if (str1[i] == '\0' && str2[i] != '\0')
		return -1;
	else if (str1[i] != '\0' && str2[i] == '\0')
		return 1;
	else
		return 0;
}

int main()
{
	int a = 34, b = 4;
	float c = 1.234f, d = 98.34f;
	char e = 'H', f = 'K';
	char str1[] = "computer", str2[] = "computers";

	printf(" % d\n", Compare(a, b));
	printf(" % d\n", Compare(c, d));
	printf(" % d\n", Compare(e, f));
	printf(" % d\n", Compare(str1, str2));

}
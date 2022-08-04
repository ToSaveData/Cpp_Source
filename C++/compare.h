#ifndef __COMPARE_H_ //#if가 돼있으면 ifndef로 된다
#define __COMPARE_H_ //저 선언부가 없으면 그냥 define을 사용한다.

#include <iostream>
using namespace std;

int Compare(const int a, const int b);
int Compare(const float a, const float b);
int Compare(const char a, const char b);
int Compare(const char str1[], const char str2[]);

#endif

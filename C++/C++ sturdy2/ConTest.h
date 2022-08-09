#pragma once
#ifndef _CONTEST_H_
#define _CONTEST_H_
#include <iostream>
using namespace std;

class CON1
{
public:
	CON1(const int c);
	~CON1();
protected:
	int c; //멤버변수 추가
};

class CON2 : public CON1
{
public:
	CON2();
	~CON2();
};

#else
#endif // !_CONTEST_H_

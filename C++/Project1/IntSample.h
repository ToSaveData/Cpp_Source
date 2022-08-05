#ifndef _INTSAMPLE_H_
#define _INTSMAPLE_H_
#include <iostream>
using namespace std;

class IntSample
{
public:
	void ShowScore();
	void setScore(const int s);
	int getScore();

private:
	int Score;
};
#endif // !_INTSAMPLE_H_


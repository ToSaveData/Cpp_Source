#include "IntSample.h"

void IntSample::ShowScore()
{
	cout << "Á¡¼ö: " << Score << endl;
}

void IntSample::setScore(const int s)
{
	Score = s;
}

int IntSample::getScore()
{
	return Score;
}
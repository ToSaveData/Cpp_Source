#include <iostream>
#include <string>
using namespace std;

class Time
{
public:
	Time();
	Time(const int hour, const int min, const int sec);
	unsigned int CalSecond();
	bool setHour(const int hour);
	int getHour();
	bool setmin(const int min);
	int getmin();
	bool setSec(const int sec);
	int getSec();
	string showTime();
	bool operator<=(Time timeobj);
	bool operator>=(Time timeobj);

private:
	unsigned int hour;
	unsigned int min;
	unsigned int sec;
	unsigned int t_sec;
};

Time::Time() : hour(0), min(0), sec(0), t_sec(0)
{
}

Time::Time(const int hour, const int min, const int sec) : hour(hour),  min(min), sec(sec), t_sec(0)
{
	//this->hour = hour;
}

unsigned int Time::CalSecond()
{
	t_sec = 3600 * hour + 60 * min + sec;
	return t_sec;
}

bool Time::setHour(const int hour)
{
	if (hour > 23 || hour < 0)
		return false;
	this->hour = hour;
	return true;
}

int Time::getHour()
{
	return hour;
}

bool Time::setmin(const int min)
{
	if (min > 59 || min < 0)
		return false;
	this->min = min;
	return true;
}
int Time::getmin()
{
	return min;
}
bool Time::setSec(const int sec)
{
	if (sec > 59 || sec < 0)
		return false;
	this->sec = sec;
	return true;
}
int Time::getSec()
{
	return sec;
}

string Time::showTime()
{
	string str;
	str = to_string(hour) + "Ω√ ";
	str += to_string(min) + "∫– ";
	str += to_string(sec) + "√ ";
	return str;
}

bool Time::operator<=(Time timeobj)
{
	this -> CalSecond();
	timeobj.CalSecond();
	
	if (this->t_sec <= timeobj.t_sec)
		return true;
	else
		return false;
}

bool Time::operator>=(Time timeobj)
{
	this->CalSecond();
	timeobj.CalSecond();

	if (this->t_sec >= timeobj.t_sec)
		return true;
	else
		return false;
}


int main()
{
	Time a1(18, 10, 10);
	Time a2(10, 11, 30);

	cout << a1.showTime() << endl;
	cout << a2.showTime() << endl;

	/*cout << "a1 <= a2 : " << (a1 <= a2) ? "true" :"false" << endl;
	cout << a2.showTime() << endl;*/


}

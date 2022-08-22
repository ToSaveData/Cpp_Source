//#include <iostream>
//using namespace std;
//
//class BoundCheckIntArray
//{
//private:
//	int* arr;
//	int arrlen;
//public:
//	BoundCheckIntArray(int len) : arrlen(len)
//	{
//		arr = new int[len];
//	}
//	int& operator[] (int idx)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	~BoundCheckIntArray()
//	{
//		delete[] arr;
//	}
//};
//
//int main(void)
//{
//	BoundCheckIntArray arr(5);
//	for (int i = 0; i < 5; i++)
//		arr[i] = (i + 1) * 11;
//	for (int i = 0; i < 6; i++)
//		cout << arr[i] << endl;
//	return 0;
//}


#include <iostream>
using namespace std;

class Point
{
public:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}

	const Point& operator+(const Point &ref)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
	friend ostream& operator<<(ostream&, const Point&);
};

Point operator+(Point A, Point B)
{
	Point a(A.xpos+B.xpos, A.ypos+B.ypos);
	return a;
}
ostream& operator<< (ostream& os, const Point &pos)
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

class Adder
{
public:
	int operator()(const int& n1, const int& n2)
	{
		return n1 + n2;
	}
	double operator()(const double& e1, const double& e2)
	{
		return e1 + e2;
	}
	Point operator()(const Point& pos1, const Point& pos2)
	{
		return pos1 + pos2;
	}
};

int main()
{
	Adder adder;
	cout << adder(1, 3) << endl;
	cout << adder(1.5, 3.7) << endl;
	cout << adder(Point(3,4), Point(7, 9));
	return 0;
}
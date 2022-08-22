#include <iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0) : m_x(x), m_y(y) {}

	int getX()
	{
		return m_x;
	}

	int getY()
	{
		return m_y;
	}

private:
	int m_x;
	int m_y;
};

class Shape : public Point
{
public:
	Shape(int x1 = 0,int  y1 = 0, int x2 = 0, int y2 = 0)
	{
		SetStartPoint(x1, y1);
		SetEndPoint(x2, y2);
	}
	
	void SetStartPoint(int x1, int y1)
	{
		m_start = Point(x1, y1);
	}
	
	void SetEndPoint(int x2, int y2)
	{
		m_end = Point(x2, y2);
	}
	//virtual void Draw() = 0;

protected:
	Point m_start;
	Point m_end;
};

class Rectangle : public Shape
{
public:
	Rectangle(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {}
	
	int GetWidth(Shape m_start, Shape m_end)
	{
		return m_end.getX() - m_start.getX();
	}
	
	int GetHeight(Shape m_start, Shape m_end)
	{
		return m_end.getX() - m_start.getX();
	}
	

};

class Ellipse: public Shape
{
public:
	Ellipse(int x1, int y1, int x2, int y2): Shape(x1, y1, x2, y2) {}
	
	bool IsCircle()
	{
		return true;
	}
	
};


int main()
{

	return 0;
}

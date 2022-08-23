//#include <iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x = 0, int y = 0) : m_x(x), m_y(y) {}
//
//	int getX()
//	{
//		return m_x;
//	}
//
//	int getY()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};
//
//class Shape : public Point
//{
//public:
//	Shape(int x1 = 0,int  y1 = 0, int x2 = 0, int y2 = 0)
//	{
//		SetStartPoint(x1, y1);
//		SetEndPoint(x2, y2);
//	}
//	
//	void SetStartPoint(int x1, int y1)
//	{
//		m_start = Point(x1, y1);
//	}
//	
//	void SetEndPoint(int x2, int y2)
//	{
//		m_end = Point(x2, y2);
//	}
//	//virtual void Draw() = 0;
//
//protected:
//	Point m_start;
//	Point m_end;
//};
//
//class Rectangle : public Shape
//{
//public:
//	Rectangle(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {}
//	
//	int GetWidth(Shape m_start, Shape m_end)
//	{
//		return m_end.getX() - m_start.getX();
//	}
//	
//	int GetHeight(Shape m_start, Shape m_end)
//	{
//		return m_end.getX() - m_start.getX();
//	}
//	
//
//};
//
//class Ellipse: public Shape
//{
//public:
//	Ellipse(int x1, int y1, int x2, int y2): Shape(x1, y1, x2, y2) {}
//	
//	bool IsCircle()
//	{
//		return true;
//	}
//	
//};
//
//
//int main()
//{
//
//	return 0;
//}

//383p 업/다운 캐스팅 / shape클래스 만들기
#include<iostream>

using namespace std;


class Point {

public:
    Point(int x = 0, int y = 0) : m_x(x), m_y(y) {};
    void Print();
    int GetX();
    int GetY();

private:
    int m_x;
    int m_y;
};

class Shape {
public:
    Shape(int x1, int y1, int x2, int y2) {
        SetStartPoint(x1, y1);
        SetEndPoint(x2, y2);
    };
    Shape(Point start, Point end) {
        SetStartPoint(start.GetX(), start.GetY());
        SetEndPoint(end.GetX(), end.GetY());
    }
    void SetStartPoint(int x, int y);
    void SetEndPoint(int x, int y);
    virtual void Draw() = 0;
    Point GetStartPos();
    Point GetEndPos();
private:
    Point m_start;
    Point m_end;
};

class Rectangle : public Shape {

public:
    Rectangle(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {};
    int GetWidth();
    int GetHeight();
    void Draw();
};

class Ellipse : public Shape {

public:
    Ellipse(int x1, int y1, int x2, int y2) : Shape(x1, y1, x2, y2) {};
    bool IsCircle();
    void Draw();

};


/////////////////Point/////////////////////
int Point::GetX() {
    return m_x;
}
int Point::GetY() {
    return m_y;
}
void Point::Print() {
    cout << "m_x : " << m_x << " m_y : " << m_y << endl;
}

/////////////////Shape/////////////////////
void Shape::SetStartPoint(int x, int y) { //private 멤버변수가 지정되도록 하는 setter
    m_start = Point(x, y);
}
void Shape::SetEndPoint(int x, int y) {
    m_end = Point(x, y);
}
Point Shape::GetStartPos() { //private 멤버변수가 반환되도록 하는 getter
    return m_start;
}
Point Shape::GetEndPos() {
    return m_end;
}

////////////////Rectangle///////////////////
int Rectangle::GetWidth() {
    return GetEndPos().GetX() - GetStartPos().GetX();
}
int Rectangle::GetHeight() {
    return GetEndPos().GetY() - GetStartPos().GetY();
}
void Rectangle::Draw() {

    for (int i = 0; i < GetStartPos().GetY(); i++)
        cout << endl;

    for (int i = 0; i < GetStartPos().GetX(); i++)
    {
        cout << " ";
    }
    for (int i = 0; i < this->GetWidth(); i++)
        cout << "*";
    cout << endl;
    for (int i = 0; i < this->GetHeight(); i++)
    {
        for (int i = 0; i < GetStartPos().GetX(); i++)
        {
            cout << " ";
        }
        cout << "*";
        for (int i = 0; i < this->GetWidth() - 2; i++)
            cout << " ";
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < GetStartPos().GetX(); i++)
    {
        cout << " ";
    }
    for (int i = 0; i < this->GetWidth(); i++)
        cout << "*";
    cout << endl;



}

////////////////Ellipse///////////////////
bool Ellipse::IsCircle() {
    return true;
}
void Ellipse::Draw() {
    int x, y;
    int R = (GetEndPos().GetX() - GetStartPos().GetX()) / 2;

    for (x = -2 * R; x <= 2 * R; x += 2) {
        for (y = -R; y <= R; y++) {
            if ((x * x + y * y) >= R * R - R / 1.3 && (x * x + y * y) <= R * R + R / 1.3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    /*Rectangle r1(5,6, 12, 15);
    Ellipse e1(1, 6, 30, 15);

    r1.Draw();
    e1.Draw();*/
    Shape* pShape1 = new Rectangle(5, 6, 12, 15); //OK
    Shape* pShape2 = new Ellipse(1, 6, 30, 16); //OK
    //Rectangle* pRect = new Shape(5, 6, 12, 15); //error
    //Ellipse* pRect = new Shape(1, 6, 30, 16); //error

    pShape1->Draw();
    pShape2->Draw();
    return 0;

}